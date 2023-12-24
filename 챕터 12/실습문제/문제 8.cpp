#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
using namespace std;

typedef char byte;

void printAsHex(byte bytes[]) {
	for (int i = 0; i < 16; ++i) {
		printf("%x ", bytes[i]);
		if (i % 8 == 7)
			cout << "\t";
	}
}

void printAsChar(byte bytes[]) {
	for (int i = 0; i < 16; ++i) {
		if (isprint(bytes[i]))
			printf("%c ", bytes[i]);
		else
			printf(". ");
		if (i % 8 == 7)
			cout << "\t";
	}
}

void num8() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "열기 실패" << endl;
		return;
	}
	cout << filename << " 출력" << endl;

	byte bytes[16];
	while (!fin.eof()) {
		fin.read(bytes, 16);
		printAsHex(bytes);
		printAsChar(bytes);
		cout << endl;
	}

	fin.close();
}