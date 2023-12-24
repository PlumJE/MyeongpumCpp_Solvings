#include <iostream>
#include "Book.h"
using namespace std;

bool operator== (Book sbj, int price) {
	return sbj.price == price;
}
bool operator== (Book sbj, string title) {
	return sbj.title == title;
}
bool operator== (Book sbj, Book obj) {
	if (sbj.title == obj.title && sbj.price == obj.price && sbj.pages == obj.pages)
		return true;
	else
		return false;
}

void num2() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}