#include <iostream>
using namespace std;

void num9() {
	char name[100];
	char address[1000];
	int age;

	cout << "�̸���?";
	cin.getline(name, 100, '\n');
	cout << "�ּҴ�?";
	cin.getline(address, 1000, '\n');
	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << endl;
}