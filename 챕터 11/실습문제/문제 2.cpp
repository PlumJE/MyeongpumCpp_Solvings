#include <iostream>
using namespace std;

void num2() {
	char ch;
	int count = 0;

	cout << "¹®ÀÚ¿­À» ÀÔ·Â>>";
	while (true) {
		cin.get(ch);
		if (cin.eof())
			break;
		if (ch == ' ')
			++count;
		if (ch == '\n')
			break;
	}
	cout << "ºóÄ­(' ')ÀÇ °¹¼ö´Â " << count << "°³ ÀÔ´Ï´Ù." << endl;
}