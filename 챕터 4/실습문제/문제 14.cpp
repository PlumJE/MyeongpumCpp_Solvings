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
				cout << "ù"; break;
			case 1:
				cout << "��"; break;
			}
			cout << "��° ���� �̸�>>";
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
				cout << players[i % 2].getName() << "�� �¸�!!" << endl;
				return;
			}
			else {
				cout << "�ƽ�����!" << endl;
			}
		}
	}
};

void num14() {
	cout << "***** �׺� ������ �����մϴ�. *****" << endl;

	GamblingGame gg;
	gg.gameStart();
}