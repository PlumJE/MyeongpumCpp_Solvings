#include <iostream>
using namespace std;

void num9() {
	char name[100];
	char address[1000];
	int age;

	cout << "이름은?";
	cin.getline(name, 100, '\n');
	cout << "주소는?";
	cin.getline(address, 1000, '\n');
	cout << "나이는?";
	cin >> age;

	cout << name << ", " << address << ", " << age << endl;
}