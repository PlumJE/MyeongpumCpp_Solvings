#include <iostream>
#include <string>
#include <map>
using namespace std;

class WHO {
	map<string, string> m;
	string name, pswd;
	int choose;
	void inputPswd() {
		cout << "이름 암호>> ";
		cin >> name >> pswd;
		m.insert(make_pair(name, pswd));
	}
	void checkPswd() {
		while (true) {
			cout << "이름? ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "을 못 찾겠습니다." << endl;
			else
				break;
		}

		while (true) {
			cout << "암호? ";
			cin >> pswd;
			if (m.at(name) == pswd) {
				cout << "통과!!" << endl;
				break;
			}
			else
				cout << "실패~~" << endl;
		}
	}
public:
	WHO() {
		cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****" << endl;
		name = "";
		pswd = "";
		choose = 0;
	}
	void run() {
		while (choose != 3) {
			cout << "삽입:1, 검사:2, 종료:3>> ";
			cin >> choose;

			switch (choose) {
			case 1:
				inputPswd();
				break;
			case 2:
				checkPswd();
				break;
			case 3:
				cout << "프로그램을 종료합니다..." << endl;
				break;
			default:
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
		cout << "프로그램을 종료합니다..." << endl;
	}
};

void num14() {
	WHO who;
	who.run();
}