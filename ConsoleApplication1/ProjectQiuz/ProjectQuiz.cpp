// ProjectQiuz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Menu {
public:
	std::string menu;

};
enum color { RED, GREEN, BLUE, WHITE };
void menu() {
	std::cout << std::setw(25);
	std::cout << "Choose one of the four:\n";
	std::cout << std::endl;
	
	std::cout << "1)  Mathematics\n" << "2)  Physics\n" << "3)  Biology\n" << "4)  Chemistry\n";
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	while (1) {
		int choise;
		std::cout << std::endl;
		std::cin >> choise;
		switch (choise) {
		case 1:
			std::cout << "\t Mathematics\n";
			system("cls");
			std::cout << "\t 2+2-?\n";
			std::cout << "1)  4\n" << "2)  5\n" << "3)  3\n";
			std::cout << std::endl;
			std::cin >> choise;
			std::cout << std::endl;
			switch (choise) {
			case 1: 
				break;
			case 2:
			    break;
			case 3:
			 	break;
			}
		 	break;
		case 2:
			std::cout << "Physics\n";
			break;
		case 3:
			std::cout << "Biology\n";
			break;
		case 4:
			std::cout << "Chemistry\n";
			break;
		}
	}
	 
}
int main()
{
	
 menu();
	system("pause");
    return 0;
}

