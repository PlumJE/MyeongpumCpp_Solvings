#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num4() {
	string ifname = "c:\\windows\\system.ini";
	ifstream fin(ifname);
	if (!fin.is_open()) {
		cout << ifname << "���⿡ �����߽��ϴ�." << endl;
		return;
	}

	string ofname = "c:\\temp\\system.txt";
	ofstream fout(ofname);
	if (!fout.is_open()) {
		cout << ofname << "���⿡ �����߽��ϴ�." << endl;
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
	cout << "���� 4 ���� �Ϸ�" << endl;

	fin.close();
	fout.close();
}