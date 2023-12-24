#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num4() {
	string ifname = "c:\\windows\\system.ini";
	ifstream fin(ifname);
	if (!fin.is_open()) {
		cout << ifname << "열기에 실패했습니다." << endl;
		return;
	}

	string ofname = "c:\\temp\\system.txt";
	ofstream fout(ofname);
	if (!fout.is_open()) {
		cout << ofname << "열기에 실패했습니다." << endl;
		return;
	}

	string line;
	while (!fin.eof()) {
		getline(fin, line);
		for (char& c : line)
			if ('a' <= c && c <= 'z')
				c -= 32;
		fout << line << endl;
	}
	cout << "문제 4 수행 완료" << endl;

	fin.close();
	fout.close();
}