// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//1
//class Employer {
//public:
//	string name, character, type;
//	Employer() {}
//	virtual ~Employer() {}
//	virtual void Print()=0;
//};
//class President : public Employer {
//public:
//	President(string name, string character, string type)
//	{
//	this->name = name;
//	this->character = character;
//	this->type = type;
//}
//	~President(string name, string character, string type){}
//	void Print() {
//		cout << this->name << endl;
//		cout << this->character << endl;
//		cout << this->type << endl;
//	}
//};
//class Manager :public Employer{
//public:
//	Manager(string name, string character, string type)
//	{
//		this->name = name;
//		this->character = character;
//		this->type = type;
//	}
//	~Manager(string name, string character, string type){}
//		void Print() {
//			cout << this->name << endl;
//			cout << this->character << endl;
//			cout << this->type << endl;
//	}
//};
//int main()
//{
//	Employer *b = new President("Vsjj", "Foxy", "Rotweiller");
//	b->Print();
//	delete b;
//	
//	system("pause");
//    return 0;
//}
//

//2
//class Figure {
//public:
//	Figure(){}
//	virtual ~Figure(){}
//	virtual float getArea() = 0;
//};
//
//class Rectangle : public Figure {
//	float a, b;
//public:
//	Rectangle() {}
//	~Rectangle(){}
//	Rectangle(float a, float b)  {
//		this->a = a;
//		this->b = b;
//	}
//	float getArea() override 
//	{
//		return a*b;
//	}
//
//};
//class Circle : public Figure {
//	float rad;
//public:
//	Circle() {}
//	~Circle() {}
//	Circle(float rad) {
//		this->rad = rad;
//	 
//	}
//	float getArea() override
//	{
//		return rad*rad*3.14;
//	}
//};
//
//int main() {
//	Figure **ar = new Figure*[2];
//	ar[0] = new Rectangle (3,2);
//	ar[1] = new Circle(2);
//	for (size_t i = 0; i <2; ++i) {
//		cout << ar[i]->getArea() << endl;
//		delete ar[i];
//	}
//	delete[] ar;
//	
//	system("pause");
//	return 0;
//}

//Errors identifier
//class MyException :public exception {
//public:
//	MyException(){}
//	virtual const char* what() const throw()
//	{
//		return  "ERROr" ;
//	}
//};
//
//float devide(float a, float b) {
//	if (b == 0) {
//		throw MyException();
//	}
//	else return a / b;
//}
//int main() {
//	try {
//		devide(2, 0);
//	}
//	catch (MyException e) {
//		cout << e.what();
//}
//	system("pause");
//	return 0;
//}

