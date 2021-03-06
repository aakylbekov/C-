// 04.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
class Mammal {
	public:
	Mammal() {
		cout << "Mammal" << endl;

	}
	~Mammal() {
		cout << "~Mammal" << endl;
	}
	virtual void move() = 0;
};
class Horse :public Mammal {
public:
	Horse() {
		cout << "Horse" << endl;

	}
	~Horse() {
		cout << "~Horse" << endl;
	} 
	void move() {
		cout << "Horse moves" << endl;
	}
};
class Human :public Mammal {
public:
	Human() {
		cout << "Human" << endl;
	}
	~Human() {
		cout << "~Human" << endl;
	}
	void move() {
		cout << "Human moves" << endl;
	}
};
class Centaur :public Human, Horse {
public:
	Centaur(){
		cout << "Centaur" << endl;
	}
	~Centaur() {
		cout << "~Centaur" << endl;
	}
	 
};

int main()
{
	Centaur *c = new Centaur();
	c->Human::move();
	delete c;
	system("pause");
	return 0;
}

