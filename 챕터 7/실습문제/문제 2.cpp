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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}