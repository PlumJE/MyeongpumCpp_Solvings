#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num3() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "���⿡ �����߽��ϴ�." << endl;
		return;
	}

	string line;
	while (!fin.eof()) {
		getline(fin, line);
		for (char& c : line)
			if ('a' <= c && c <= 'z')
				c -= 32;
		cout << line << endl;
	}
	fin.close();
}