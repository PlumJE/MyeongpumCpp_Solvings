#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void num9() {
	Person people[3];
	string name;
	string tel;

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; ++i) {
		cout << "사람 " << (i + 1) << ">> ";
		cin >> name >> tel;
		people[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; ++i) {
		cout << people[i].getName() << " ";
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; ++i) {
		if (name == people[i].getName()) {
			cout << "전화번호는 " << people[i].getTel() << endl;
			return;
		}
	}
	cout << "사람을 못 찾았습니다 ㅠㅠ" << endl;
	return;
}