// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <typeinfo>
 class A{
 public:
	 int z;
	 A (){}
	 virtual ~A() {}
 };
 class B:public A{
 public: 
	 };

 void f1() {
	 A a;
	 B b;
	 
	 std::cout << typeid(b).before(typeid(a)) << std::endl;
	 std::cout << typeid(a).name();
 }
 class Temp {
	 int x;
 public:
	 int getX() const {
		 return x;
	 }
	 void setX(int x) const {
		 const_cast <Temp *> (this)->x = x;
	 }
 
 
 };
int main()
{
	//int y = 5;
	//A *a = new B();
	//B *b = dynamic_cast<B*>(new A());
	//double x = static_cast<double>(5);
	////B (b) = static_cast<A *> (z);
	//const double q = 5.5;
	//const_cast<double &>(q)= 4;
 //   std::cout << q;

	/*double *e = reinterpret_cast<double *>(123);
	delete e;*/
	unsigned p = 5;
	unsigned *u=&p;   
	int *i;
	i = reinterpret_cast<int *>(u);
	std::cout << *i;

	/*delete a;
 	delete b;*/
	system("pause");
    return 0;
}

