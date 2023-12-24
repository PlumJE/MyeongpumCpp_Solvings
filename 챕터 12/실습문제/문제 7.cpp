#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

typedef char byte;

void num7() {
	string src = "c:\\windows\\system.ini", dest = "c:\\temp\\system.txt";

	ifstream fin(src, ios::binary);
	if (!fin.is_open()) {
		cout << src << "파일 열기 실패" << endl;
		return;
	}

	fin.seekg(0, ios::end);
	int filesize = fin.tellg();
	fin.seekg(0, ios::beg);

	ofstream fout(dest, ios::binary);
	if (!fout.is_open()) {
		cout << dest << "파일 열기 실패" << endl;
		return;
	}

	byte* bytes = new byte[filesize];
	while (!fin.eof()) {
		fin.read(bytes, filesize);
		reverse(bytes, bytes + filesize);
		fout.write(bytes, filesize);
	}

	fin.close();
	fout.close();
	cout << "문제 7 수행 완료" << endl;
}