#include <iostream>
#include <cstring>
using namespace std;

void num8() {
	char name[100];
	char longest_name[100] = "";

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; ++i) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		if (strlen(longest_name) < strlen(name))
			strcpy(longest_name, name);
	}

	cout << "���� �� �̸��� " << longest_name << endl;
}