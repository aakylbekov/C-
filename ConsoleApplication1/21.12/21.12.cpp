// 21.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class A {
public:
	int value;
	A() {
		std::cout << "A()" << std::endl;
	}
	A(int x) : value(x) {}
	~A() {
		std::cout << "~A()" << std::endl;
	}
 
	friend std::ostream & operator<< (std::ostream &, const A &);
	friend void operator >>(std::istream & stream, const A & a);
};
std::ostream & operator<<(std::ostream & stream, const A & a)
{
	return stream << a.value;
}
void operator>>(std::istream & stream, const A & a) {
	stream >> a;
}
//void find() {
//	int arr[10] = { 1,2,5,9,4,6,7,8,0,3 };
//	/*int * p;
//
//	p = std::find (arr, arr + 10, 3);
//	if (p != arr + 10)
//		std::cout << "Element found in myints: " << *p << '\n';
//	else
//		std::cout << "Element not found in myints\n";	*/
//	
//	std::vector<A> myvector(arr, arr + 10);
//	std::vector<A>::iterator it;
//
//	it = find(myvector.begin(), myvector.end(),11);
//	if (it != myvector.end())
//		std::cout << "Element found in myvector: " << *it << '\n';
//	else
//		std::cout << "Element not found in myvector\n";
//
//}

class Finder {  //Functor 
public:
	Finder(int y) : x(y) {  }
	int x;
	bool operator() (const A & a) {
		return x == a.value;
	}
};

void lambda(){

std::vector<A> x = { A(1),A(2), A(3) };
std::for_each(x.begin(), x.end(), [](A a) {std::cout << a.value << "\t"; });
std::cout << std::endl;
int y;
std::cin >> y;
Finder f(y);
auto a = std::find_if(x.begin(), x.end(), f);
auto b = std::find_if(x.begin(), x.end(), [y](A & a) {return a.value == y; }); //Lambda
if (a != x.end()) {
	std::cout << *a << "\t" << *b << std::endl;
}
else std::cout << "not found" << std::endl;

}

void sh() {
	std::vector<int> f = { 1,2,3,4 };
	std::vector<int> b = { 3,5,4,2 };

	if (std::is_permutation(f.begin(), f.end(), b.begin()))
		std::cout << "f and b contain the same elements.\n";
	else std::cout << "f and b does not contain the same elements.\n";
}

bool myfunction(int i, int j) {
	return (i == j);
}
void unique() {
	int myints[] = { 10,20,20,20,30,30,20,20,10 };           // 10 20 20 20 30 30 20 20 10
	std::vector<int> myvector(myints, myints + 9);

	// using default comparison:
	std::vector<int>::iterator it;
	it = std::unique(myvector.begin(), myvector.end());   // 10 20 30 20 10 ?  ?  ?  ?
														  //                ^

	myvector.resize(std::distance(myvector.begin(), it)); // 10 20 30 20 10

														  // using predicate comparison:
	std::unique(myvector.begin(), myvector.end(), myfunction);   // (no changes)

																 // print out content:
	std::cout << "myvector contains:";
	for (it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}


int main()
{ 
	std::string  s = "12435";
	//for (int i = 0; i < s.length(); ++i) {
	//	for (int j = 0; j < s.length(); ++j) {
	//		if (i != j && s[i] == s[j]){
	//			std::cout << "not unique";
	//			system("pause");
	//			return 0;
	//	}
	//	}

 // }
	//std::cout << "unique";
	
	/*s = "1243543446";
	bool arr[360] = { false };
	for (int i = 0; i < s.length(); ++i) {
		int temp = (int)(s[i] - 48);
		if (arr[temp]) {
			std::cout << "not unique";
			system("pause");
			return 0;
		}
		arr[(int)s[i] - 48] = true;
	} 
	std::cout << "unique";
*/
	s = "1243543446";
	std::sort(s.begin(), s.end());
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == s[i - 1]) {
			std::cout << "not unique";
			 
			return 0;
		}
	}
	std::cout << "unique";
	
	
	
 
	system("pause");
	return 0;
}
 

