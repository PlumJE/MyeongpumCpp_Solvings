#include <iostream>
using namespace std;

void num1() {
	char ch;
	int count = 0;

	cout << "���ڿ��� �Է�>>";
	while ((ch = cin.get()) != EOF) {
		if (ch == 'a')
			++count;
		if (ch == '\n')
			break;
	}
	cout << "'a'�� " << count << "�� �Դϴ�." << endl;
}