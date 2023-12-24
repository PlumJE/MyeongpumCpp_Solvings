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
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}