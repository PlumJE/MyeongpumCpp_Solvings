#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	Player() {}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class GamblingGame {
	Player players[2];
	int result[3];
public:
	GamblingGame() {
		string name;
		for (int i = 0; i < 2; ++i) {
			switch (i) {
			case 0:
				cout << "첫"; break;
			case 1:
				cout << "두"; break;
			}
			cout << "번째 선수 이름>>";
			cin >> name;
			players[i].setName(name);
		}
		memset(result, 0, sizeof(result));
		srand(time(NULL));
	}
	void gameStart() {
		for (int i = 0; ; ++i) {
			cout << players[i % 2].getName() << ":";
			system("pause");

			for (int j = 0; j < 3; ++j) {
				result[j] = (rand() % 3);
				cout << result[j] << "\t";
			}

			if (result[0] == result[1] && result[1] == result[2]) {
				cout << players[i % 2].getName() << "님 승리!!" << endl;
				return;
			}
			else {
				cout << "아쉽군요!" << endl;
			}
		}
	}
};

void num14() {
	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;

	GamblingGame gg;
	gg.gameStart();
}