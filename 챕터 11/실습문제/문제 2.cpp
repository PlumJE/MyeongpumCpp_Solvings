#include <iostream>
using namespace std;

void num2() {
	char ch;
	int count = 0;

	cout << "���ڿ��� �Է�>>";
	while (true) {
		cin.get(ch);
		if (cin.eof())
			break;
		if (ch == ' ')
			++count;
		if (ch == '\n')
			break;
	}
	cout << "��ĭ(' ')�� ������ " << count << "�� �Դϴ�." << endl;
}