#include <iostream>
#include "Book.h"
using namespace std;

bool operator! (Book sbj) {
	if (sbj.price == 0)
		return true;
	else
		return false;
}

void num3() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
}