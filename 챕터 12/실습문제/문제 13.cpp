#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isStartingWord(string str1, string str2) {
	if (str1.length() > str2.length())
		return false;
	for (int i = 0; i < str1.length(); ++i) {
		if (str1[i] != str2[i])
			return false;
	}
	return true;
}

void num13() {
	vector<string> words;
	string word;

	ifstream srcfile("words.txt");
	while (!srcfile.eof()) {
		srcfile >> word;
		words.push_back(word);
	}
	cout << "words.txt���� �ε� �Ϸ�" << endl;

	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���." << endl;
	while (true) {
		cout << "�ܾ�>> ";
		cin >> word;

		if (word == "exit")
			break;

		bool result = false;
		for (int i = 0; i < words.size(); ++i) {
			if (isStartingWord(word, words[i])) {
				cout << words[i] << endl;
				result = true;
			}
		}
		if (result == false)
			cout << "�߰��� �� ����" << endl;
	}
}