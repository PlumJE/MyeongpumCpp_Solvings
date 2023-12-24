#include <iostream>
#include <string>
#include <map>
using namespace std;

class HIGHSCORE {
	map<string, int> m;
	string name;
	int score;
	int choose;
	void inputData() {
		cout << "�̸��� ����>> ";
		cin >> name >> score;
		m.insert(make_pair(name, score));
	}
	void searchData() {
		while (true) {
			cout << "�̸�>> ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "�� �� ã�ڽ��ϴ�." << endl;
			else
				break;
		}

		cout << name << "�� ������ " << m.at(name) << endl;
	}
public:
	HIGHSCORE() {
		cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****" << endl;
		name = "";
		score = 0;
		choose = 0;
	}
	void run() {
		while (choose != 3) {
			cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
			cin >> choose;

			switch (choose) {
			case 1:
				inputData();
				break;
			case 2:
				searchData();
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

void num13() {
	HIGHSCORE highscore;
	highscore.run();
}