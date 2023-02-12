#include<iostream>
#include<numeric>


int foo() {
	return 5;
}

char* foo2(char* c1, char* c2) {
	return c1;
}

double foo3(float& f) { return 3.14; }

struct A {
	int i;
	int f(int* i) { return *i; };
	int f2(double (*fp)(float&)) { return 5; };
};

int main() {
	//1
	int* ip = new int{};
	int j = 3;
	ip = &j;
	*ip = 5;

	//2
	j = 5;
	int &ir(j);
	std::cout << typeid(ir).name();

	//3
	double* dp = new double{};
	double d = 3.3;
	dp = &d;
	double& dr(d);
	dr = 4.4;
	std::cout << typeid(dr).name();

	//4
	A a;
	A* ap;
	ap = &a;

	//5 & 6
	char const* cp = new char('a');
	char const& cp2 = *cp;
	std::cout << typeid(cp).name() << typeid(cp2).name();

	//7
	long *la = new long[7]; //la is holds the address of the first array element
	*la = 1000000;
	std::cout << typeid(la).name();

	//8
	j = 10;
	*ip = j;
	int** arr2dp; //arr2d is a point to (a point to an int)
	arr2dp = &ip;
	std::cout << typeid(arr2dp).name();

	//9
	j = 10;
	*ip = j;
	int*& irp = ip; //reference to a pointer
	std::cout << typeid(irp).name();

	//10
	float f;
	f = 24.2f;
	float& fr = f;

	//11
	int (*fp)();
	fp = &foo;
	std::cout << "11:" << (*fp)();
	std::cout << typeid(fp).name();

	//12
	int (*&fpr)()(fp); //reference to a function pointer
	std::cout << "12:" << (**fpr)(); //calls the function .............................
	std::cout << typeid(fpr).name();

	//13
	char* (*fp2)(char*, char*); //function pointer
	fp2 = &foo2;
	char* c1 = new char('a');
	char* c2 = new char('b');
	std::cout << "13:" << (*fp2)(c1, c2); //displays the pointer to the char
	std::cout << typeid(fp2).name();
	

	//14
	int A:: *aip = &A::i;
	A a2;
	a2.*aip = 4;
	std::cout << "14:" << typeid(aip).name();

	//15
	int (A::*afp) (int*) = &A::f; //afp is a pointer to member function
	(a2.*afp) (ip); //calling member function
	std::cout << "15:" << typeid(afp).name();

	//16
	int (A:: * *afpp) (int*);
	afpp = &afp; // pointer to a pointer that points to a member function
	(a2.* * afpp)(ip);
	std::cout << "16:" << typeid(afpp).name();

	//17
	int (A:: * &afpr) (int*)(afp);
	(a2.* afpr)(ip); //not sure.........(ip points to 10)
	std::cout << "17:" << typeid(afpr).name();

	//18
	int (A::*afp2)(double (*)(float&)) = &A::f2; //function pointer to a function that takes in a function pointer as input
	double (*fp3) (float&); //function pointer
	fp3 = &foo3;
	(a2.*afp2)(fp3);
	std::cout << "17:" << typeid(afp2).name();

	return 0;

}



