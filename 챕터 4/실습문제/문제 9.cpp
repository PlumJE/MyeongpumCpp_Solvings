#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void num9() {
	Person people[3];
	string name;
	string tel;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; ++i) {
		cout << "��� " << (i + 1) << ">> ";
		cin >> name >> tel;
		people[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; ++i) {
		cout << people[i].getName() << " ";
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; ++i) {
		if (name == people[i].getName()) {
			cout << "��ȭ��ȣ�� " << people[i].getTel() << endl;
			return;
		}
	}
	cout << "����� �� ã�ҽ��ϴ� �Ф�" << endl;
	return;
}