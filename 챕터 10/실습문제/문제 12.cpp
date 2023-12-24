#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Word {
	string english;
	string korean;
public:
	Word(string eng="", string kor="") {
		english = eng;
		korean = kor;
	}
	string getEnglish() {
		return english;
	}
	string getKorean() {
		return korean;
	}
	bool operator== (const Word& op2) {
		if (this->english == op2.english && this->korean == op2.korean)
			return true;
		else
			return false;
	}
};

class EngVocaQuiz {
	vector<Word> v;
	int* rand4num() {
		int* result = new int[4];
		memset(result, -1, 4);
		int r;
		for (int i = 0; i < 4; ++i) {
			do {
				r = rand() % v.size();
			} while (find(result, result + 4, r) != result + 4);
			result[i] = r;
		}
		cout << endl;
		return result;
	}
	void insertWord() {
		string english, korean;
		cout << "영어단어에 exit을 입력하면 입력 끝" << endl;
		while (true) {
			cout << "영어 >>";
			cin >> english;
			if (english == "exit")
				break;

			cout << "한글 >>";
			cin >> korean;
			v.push_back(Word(english, korean));
		}
	}
	void test() {
		cout << "영어 어휘 테스트를 시작합니다. 1~4외 다른 입력시 종료." << endl;
		int* question, answer, reply;
		while (true) {
			question = rand4num();
			answer = rand() % 4;

			cout << v[question[answer]].getEnglish() << '?' << endl;
			for (int i = 0; i < 4; ++i)
				cout << '(' << i + 1 << ") " << v[question[i]].getKorean() << ' ';
			cout << ":>";
			cin >> reply;

			if (reply < 0 || 4 < reply)
				break;

			if (answer == reply - 1)
				cout << "Excellent !!" << endl;
			else
				cout << "No. !!" << endl;
		}
	}
public:
	EngVocaQuiz() {
		cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;
		v.push_back(Word("honey", "꿀"));
		v.push_back(Word("dall", "인형"));
		v.push_back(Word("painting", "그림"));
		v.push_back(Word("stock", "주식"));
		v.push_back(Word("bear", "곰"));
		v.push_back(Word("lover", "애인"));
		v.push_back(Word("deal", "거래"));
		v.push_back(Word("darling", "자기"));
		srand(time(NULL));
	}
	void run() {
		int choose;
		while (true) {
			cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료: 기타 키 >> ";
			cin >> choose;
			switch (choose) {
			case 1:
				insertWord();
				break;
			case 2:
				test();
				break;
			default:
				return;
			}
			cout << endl;
		}
	}
};

void num12() {
	EngVocaQuiz quiz;
	quiz.run();
}