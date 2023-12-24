#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num2() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "열기에 실패했습니다." << endl;
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