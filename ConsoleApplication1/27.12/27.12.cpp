// 27.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>
#include <iostream>
//#include <string>
#include <conio.h>
//#include <fstream>

using namespace std;

void main(void)

{
	const int N = 6;
	int i;
	char a[N];
	int c;
	for (i = N - 1; (c = getchar()) != '\n' && i >= 0; i--)
		a[i] = c;
	cout << "a[4]=" << a[4];
	if (a[4]<'0' && a[4]>'9')
		cout << "\nerror";
	else
		switch (a[4])
		{
		case '1':
			cout << "\nТеория чисел";
			break;
		case '2':
			cout << "\nТеория вероятностей";
			break;
		case '3':
			cout << "\nЧисленные методы";
			break;
		case '4':
			cout << "\nАналитическая геометрия";
			break;
		case '5':
			cout << "\nИсследование операций";
			break;
		default:
			cout << "\nfail";
		}

}
