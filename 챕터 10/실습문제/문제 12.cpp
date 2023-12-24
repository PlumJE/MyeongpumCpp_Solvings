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
		cout << "����ܾ exit�� �Է��ϸ� �Է� ��" << endl;
		while (true) {
			cout << "���� >>";
			cin >> english;
			if (english == "exit")
				break;

			cout << "�ѱ� >>";
			cin >> korean;
			v.push_back(Word(english, korean));
		}
	}
	void test() {
		cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4�� �ٸ� �Է½� ����." << endl;
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
		cout << "***** ���� ���� �׽�Ʈ�� �����մϴ�. *****" << endl;
		v.push_back(Word("honey", "��"));
		v.push_back(Word("dall", "����"));
		v.push_back(Word("painting", "�׸�"));
		v.push_back(Word("stock", "�ֽ�"));
		v.push_back(Word("bear", "��"));
		v.push_back(Word("lover", "����"));
		v.push_back(Word("deal", "�ŷ�"));
		v.push_back(Word("darling", "�ڱ�"));
		srand(time(NULL));
	}
	void run() {
		int choose;
		while (true) {
			cout << "���� ����: 1, ���� �׽�Ʈ: 2, ���α׷� ����: ��Ÿ Ű >> ";
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