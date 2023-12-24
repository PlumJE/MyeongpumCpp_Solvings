#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Nation {
	string nation = "";
	string capital = "";
};

class Quiz {
	vector<Nation> v;
public:
	Quiz() {
		cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
		v.push_back({ "대한민국", "서울" });
		v.push_back({ "일본", "도쿄" });
		v.push_back({ "중화민국", "톈진" });
		v.push_back({ "만주", "하르빈" });
		v.push_back({ "몽골", "울란바타르" });
		v.push_back({ "위구르스탄", "위륌치" });
		v.push_back({ "티베트", "라사" });
		srand(time(NULL));
	}
	void run() {
		int choose;
		while (true) {
			cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
			cin >> choose;
			switch (choose) {
			case 1:
				input();
				break;
			case 2:
				quiz();
				break;
			case 3:
				return;
			default:
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
	void input() {
		cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
		int index = v.size();
		string nation, capital;
		while (true) {
			reset:
			cout << ++index << ">>";
			cin >> nation >> capital;

			if (nation == "no" && capital == "no")
				return;

			for (auto iter = v.begin(); iter < v.end(); iter++) {
				if (iter->nation == nation && iter->capital == capital) {
					cout << "already exits !!" << endl;
					goto reset;
				}
			}
			v.push_back({ nation, capital });
		}
	}
	void quiz() {
		int index;
		string answer;
		while (true) {
			index = rand() % v.size();
			cout << v[index].nation << "의 수도는?";
			cin >> answer;

			if (answer == "exit")
				return;

			if (answer == v[index].capital)
				cout << "Correct !!" << endl;
			else
				cout << "NO !!" << endl;
		}
	}
};

void num10() {
	Quiz q;
	q.run();
}