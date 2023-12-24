#include <iostream>
#include <cstring>
using namespace std;

void num8() {
	char name[100];
	char longest_name[100] = "";

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 0; i < 5; ++i) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		if (strlen(longest_name) < strlen(name))
			strcpy(longest_name, name);
	}

	cout << "가장 긴 이름은 " << longest_name << endl;
}