#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;

bool operator< (Book sbj, Book obj) {
	if (sbj.title < obj.title)
		return true;
	else
		return false;
}

void num4() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}