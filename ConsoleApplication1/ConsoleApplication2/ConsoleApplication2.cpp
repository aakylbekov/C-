// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
//class A {
//public:
//	A() { cout << "A" << endl; }
//	virtual ~A(){ cout << "~A" << endl; }
//};//
//
//class B :public A {
//public:
//	B() { cout << "B" << endl; }
//	~B() { cout << "~B" << endl; }
//};//
//int main()
//{
//	A *b = new B();
//	delete b;
//	system("pause");
//	return 0;
//}


//Abstract class
//
//class IProgrammer {
//public:
//	virtual void usePC() = 0;
//	virtual string doReport() = 0;
//
//};
//
//class Worker: public IProgrammer {
//public:
//	void usePC() {
//		cout << "I use PC" << endl;
//	}
//	string doReport() {
//		cout << "DONE" << endl;
//	}
//
//};
//int main()
//{
//	IProgrammer *a = new Worker();
//	system("pause");
//	return 0;
//}

//1
// template <typename T>
//class Interface {
//public:
//	virtual void push(const T &)=0;
//	virtual T pop()=0;
//};
//template <typename T>
//class Stack: public Interface {
//public:
//	Stack() {}
//	~Stack() {}
//	void push(const T &) {
//		
//	}
//    T pop() {
//
//	}
//};
class Animal{
public:
	string name, character,  type;
	Animal (){}
	virtual ~Animal(){}
	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;
};
class Cat: public Animal{
public:
	Cat(string name, string character, string type) {
		this->name = name;
		this->character = character;
		this->type = type;
	}
	~Cat() {  }
	void Sound() {
		cout << " May" << endl;
	}
	void Show() {
		cout << this->name << endl;
	}
	void Type() {
		cout << this->character << endl;
			cout << this->type << endl;
	}
};
 /*
class Dog : public Animal {
public:
	Dog(string name, string character, string type) {
		this->new name;
		this->new character;
		this->new type;
	}
	~Dog() { delete name, character, type; }
	Sound() {
		cout << " Gav" << endl;
	}
	Show() {
		cout << this ->name << endl;
	}
	Type() {
		cout << this->character, this->type << endl;
	}
};
template <typename T>
class Parrot : public Animal {
public:
	Parrot(T... ) {
		this->new name;
		this->new character;
		this->new type;
	}
	~Parrot() { delete name, character, type; }
	Sound() {
		cout << " Pirrrrrattttt" << endl;
	}
	Show() {
		cout << this->name << endl
	}
	Type() {
		cout << this->character, this->type << endl;
	}
};
template <typename T>
class Hamster : public Animal {
public:
	Hamster(T... ) {
		this->new name;
		this->new character;
		this->new type;
	}
	~Hamster() { delete name, character, type; }
	Sound() {
		cout << " HFHFHFHFHF" << endl;
	}
	Show() {
		cout << this->name << endl
	}
	Type() {
		cout << this->character, this->type << endl;
	}
};*/
int main()
{

	Animal *a = new Cat("Vsjj", "Foxy", "Rotweiller");
	a->Show();
	a->Sound();
	a->Type();
	delete a;
	system("pause");
	return 0;
}

 
