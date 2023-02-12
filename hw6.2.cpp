//#include<iostream>
//#include<numeric>
//
//
//int foo() {
//	return 5;
//}
//
//char* foo2(char* c1, char* c2) {
//	return c1;
//}
//
//
//
//int main() {
//	//1
//	int* ip = new int{};
//	int j = 3;
//	ip = &j;
//	*ip = 5;
//
//	//2
//	j = 5;
//	int &ir(j);
//	std::cout << typeid(ir).name();
//
//	//3
//	double* dp = new double{};
//	double d = 3.3;
//	dp = &d;
//	double& dr(d);
//	dr = 4.4;
//	std::cout << typeid(dr).name();
//
//	//4
//	struct A {
//		A() {}
//		int i;
//		int f(int* i) { return *i; }
//	};
//	A a2;
//	A* ap;
//	ap = &a2;
//
//	//5 & 6
//	char const* cp = new char('a');
//	char const& cp2 = *cp;
//	std::cout << typeid(cp).name() << typeid(cp2).name();
//
//	//7
//	long *la = new long[7]; //la is holds the address of the first array element
//	*la = 1000000;
//	std::cout << typeid(la).name();
//
//	//8
//	j = 10;
//	*ip = j;
//	int** arr2dp; //arr2d is a point to (a point to an int)
//	arr2dp = &ip;
//	std::cout << typeid(arr2dp).name();
//
//	//9
//	j = 10;
//	*ip = j;
//	int*& irp = ip; //reference to a pointer
//	std::cout << typeid(irp).name();
//
//	//10
//	float f;
//	f = 24.2f;
//	float& fr = f;
//
//	//11
//	int (*fp)();
//	fp = &foo;
//	std::cout << typeid(fp).name();
//
//	//12
//	int (*&fpr)()(fp);
//	std::cout << typeid(fpr).name();
//
//	//13
//	char* (*fp2)(char*, char*);
//	fp2 = &foo2;
//	std::cout << typeid(fp2).name();
//
//	//14
//	class A2 {
//	public:
//		A2() {}
//		int i;
//	};
//	int A2:: *ip = &A2::i;
//	/**ip = 5;*/
//	std::cout << typeid(ip).name();
//
//	//15
//	//int (A::*fp) (int*) = &A::f;
//	////int (A:: * fp2) (int*) (& A::f);
//	//std::cout << typeid(fp).name();
//
//	//16
//	/*int (A:: * *fp2) (int*);
//	fp2 = &fp;*/
//
//	return 0;
//
//}
//
//
//
