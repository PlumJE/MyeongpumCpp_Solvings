#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isSimilarWord(string str1, string str2) {
	if (str1.length() != str2.length())
		return false;

	int difference = 0;
	for (int i = 0; i < str1.length(); ++i)
		if (str1[i] != str2[i])
			++difference;
	if (difference == 1)
		return true;
	else
		return false;
}

void num12() {
	vector<string> words;
	string word;

	ifstream srcfile("words.txt");
	while (!srcfile.eof()) {
		srcfile >> word;
		words.push_back(word);
	}
	cout << "words.txt파일 로딩 완료" << endl;

	cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
	while (true) {
		cout << "단어>> ";
		cin >> word;

		if (word == "exit")
			break;

		bool result = false;
		for (int i = 0; i < words.size(); ++i) {
			if (isSimilarWord(word, words[i])) {
				cout << words[i] << endl;
				result = true;
			}
		}
		if (result == false)
			cout << "단어 없음" << endl;
	}
}