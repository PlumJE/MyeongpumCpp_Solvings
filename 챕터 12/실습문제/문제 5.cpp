#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num5() {
	string filename = "��� ���� �ڵ�.cpp";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "���⿡ �����߽��ϴ�." << endl;
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