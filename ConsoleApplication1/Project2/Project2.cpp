// Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class User {
public:
	int score;
	string username, password;
	User(string username, string password, int score = 0) {
		this->username = username;
		this->password = password;
		this->score = score;
	}
};
//dd
class Manager {
public:
	vector<User> users;
	int current;
	Manager() {
		ifstream fin("players.txt");
		while (!fin.eof()) {
			int score;
			string username, password;
			fin >> username >> password >> score;
			users.push_back(User(username, password, score));
		}
		fin.close();
		current = -1;
	}
	~Manager() {
		ofstream fout("players.txt");
		for (int i = 0; i < users.size(); ++i) {
			fout << users[i].username << ' ' << users[i].password << ' ' << users[i].score << endl;
		}
		fout.close();
	}
	void reg(string username, string password) {
		users.push_back(User(username, password));
	}
	void login(string username, string password) {
		for (int i = 0; i < users.size(); ++i) {
			if (users[i].username == username && users[i].password == password) {
				current = i;
			}
		}
	}
};

class Surrounding {
public:
	Manager * manager;
	Surrounding() {
		cout << "beginning" << endl;
		manager = new Manager();
	}
	~Surrounding() {
		cout << "ending" << endl;
		delete manager;
	}
	void greeting() {
		while (true) {
			cout << "hello! 1 for registration, 2 to for authorization, 3 for changing score, 4 for exit: " << endl;
			int choice;
			cin >> choice;
			switch (choice) {
			case 1:
				reg();
				break;
			case 2:
				login();
				break;
			case 3:
				changeScore();
				break;
			case 4:
				return;
			default:
				break;
			}
		}
	}
	void reg() {
		string username, password;
		cout << "username and password: ";
		cin >> username >> password;
		manager->reg(username, password);
		login();
	}

	void login() {
		string username, password;
		cout << "username and password: ";
		cin >> username >> password;
		manager->login(username, password);
	}
	void changeScore() {
		++manager->users[manager->current].score;
	}
};


int main() {
	Surrounding s;
	s.greeting();
	system("pause");
	return 0;
}