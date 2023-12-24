#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Hangman {
	ifstream srcfile;
	string word;
	bool* is_opened;
	int life;
	void chooseWord() {
		int n = rand() % 25143;
		for (int i = 0; i <= n; ++i)
			srcfile >> word;
		cout << word << endl;
		is_opened = new bool[word.length()];
		memset(is_opened, false, word.length());
	}
	void printWord() {
		for (int i = 0; i < word.length(); ++i) {
			if (is_opened[i] == true)
				cout << word[i];
			else
				cout << '-';
		}
		cout << endl;
	}
	void guessLetter() {
		char c;
		cout << ">>";
		cin >> c;
		
		int n = word.find(c);
		if (n == string::npos) {
			--life;
			return;
		}
		if (is_opened[n] == true) {
			--life;
			return;
		}
		for (int i = 0; i < word.length(); ++i)
			if (word[i] == c)
				is_opened[i] = true;
	}
	bool is_success() {
		for (int i = 0; i < word.length(); ++i)
			if (is_opened[i] == false)
				return false;
		return true;
	}
public:
	Hangman() {
		cout << "------------------------------------" << endl;
		cout << "지금부터 행맨 게임을 시작합니다." << endl;
		cout << "------------------------------------" << endl;
		srand(time(NULL));
		srcfile.open("words.txt");
		is_opened = NULL;
		life = 0;
	}
	void run() {
		char choose = 'a';
		while (choose != 'N' && choose != 'n') {
			life = 5;
			chooseWord();
			while (life > 0 && is_success() == false) {
				printWord();
				guessLetter();
			}
			if (life <= 0)
				cout << "5번 실패 하였습니다." << endl;
			cout << word << endl << "Next(y/n)?";
			cin >> choose;
		}
	}
	~Hangman() {
		srcfile.close();
		delete []is_opened;
	}
};

void main() {
	Hangman hm;
	hm.run();
}