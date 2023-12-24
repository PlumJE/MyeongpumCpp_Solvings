#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

class Hangman {
	ifstream srcfile;
	vector<string> words;
	string word;
	bool* is_opened;
	int life;
	void chooseWord() {
		int n = rand() % 25143;
		word = words[n];
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

		while (!srcfile.eof()) {
			srcfile >> word;
			words.push_back(word);
		}
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

void num11() {
	Hangman hm;
	hm.run();
}