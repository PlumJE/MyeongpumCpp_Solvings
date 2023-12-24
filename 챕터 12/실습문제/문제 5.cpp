#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num5() {
	string filename = "행맨 게임 코드.cpp";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "열기에 실패했습니다." << endl;
		return;
	}

	string line;
	int i = 1;
	while (!fin.eof()) {
		getline(fin, line);
		cout << line << endl;
	}
	fin.close();
}