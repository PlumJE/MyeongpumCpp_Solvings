#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num2() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "���⿡ �����߽��ϴ�." << endl;
		return;
	}

	string line;
	int i = 1;
	while (!fin.eof()) {
		getline(fin, line);
		cout << i++ << " : " << line << endl;
	}
	fin.close();
}