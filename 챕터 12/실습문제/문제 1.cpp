#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num1() {
	string filename = "c:\\temp\\test.txt";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "파일 열기에 실패했습니다." << endl;
		return;
	}

	char c;
	while ((c = fin.get()) != EOF)
		cout << c;
	cout << endl;
	fin.close();
}