#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num1() {
	string filename = "c:\\temp\\test.txt";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "���� ���⿡ �����߽��ϴ�." << endl;
		return;
	}

	char c;
	while ((c = fin.get()) != EOF)
		cout << c;
	cout << endl;
	fin.close();
}