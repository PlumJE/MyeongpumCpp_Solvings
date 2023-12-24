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
		cout << "이름과 점수>> ";
		cin >> name >> score;
		m.insert(make_pair(name, score));
	}
	void searchData() {
		while (true) {
			cout << "이름>> ";
			cin >> name;
			if (m.find(name) == m.end())
				cout << name << "을 못 찾겠습니다." << endl;
			else
				break;
		}

		cout << name << "의 점수는 " << m.at(name) << endl;
	}
public:
	HIGHSCORE() {
		cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
		name = "";
		score = 0;
		choose = 0;
	}
	void run() {
		while (choose != 3) {
			cout << "입력:1, 조회:2, 종료:3 >> ";
			cin >> choose;

			switch (choose) {
			case 1:
				inputData();
				break;
			case 2:
				searchData();
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

void num13() {
	HIGHSCORE highscore;
	highscore.run();
}