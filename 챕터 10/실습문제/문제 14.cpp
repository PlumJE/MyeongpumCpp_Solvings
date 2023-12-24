#include <iostream>
#include <string>
#include <map>
using namespace std;

class WHO {
	map<string, string> m;
	string name, pswd;
	int choose;
	void inputPswd() {
		cout << "�̸� ��ȣ>> ";
		cin >> name >> pswd;
		m.insert(make_pair(name, pswd));
	}
	void checkPswd() {
		while (true) {
			cout << "�̸�? ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "�� �� ã�ڽ��ϴ�." << endl;
			else
				break;
		}

		while (true) {
			cout << "��ȣ? ";
			cin >> pswd;
			if (m.at(name) == pswd) {
				cout << "���!!" << endl;
				break;
			}
			else
				cout << "����~~" << endl;
		}
	}
public:
	WHO() {
		cout << "***** ��ȣ���� ���α׷� WHO�� �����մϴ� *****" << endl;
		name = "";
		pswd = "";
		choose = 0;
	}
	void run() {
		while (choose != 3) {
			cout << "����:1, �˻�:2, ����:3>> ";
			cin >> choose;

			switch (choose) {
			case 1:
				inputPswd();
				break;
			case 2:
				checkPswd();
				break;
			case 3:
				cout << "���α׷��� �����մϴ�..." << endl;
				break;
			default:
				cout << "�߸��� �Է��Դϴ�." << endl;
				break;
			}
		}
		cout << "���α׷��� �����մϴ�..." << endl;
	}
};

void num14() {
	WHO who;
	who.run();
}