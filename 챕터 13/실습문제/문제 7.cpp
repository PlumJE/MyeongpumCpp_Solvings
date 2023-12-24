#include <iostream>
#include <fstream>
#include <string>
using namespace std;

typedef char byte;
void num7() {
	string ifname = "c:\\windows\\system.ini", ofname = "c:\\temp\\system.txt";
	ifstream fin(ifname, ios::binary);
	ofstream fout(ofname, ios::binary);

	try {

		if (!fin.is_open())
			throw (ifname + "파일 열기 실패");


		if (!fout.is_open())
			throw (ofname + "파일 열기 실패");

		byte bytes[64];
		int readBytes;
		while (!fin.eof()) {
			fin.read(bytes, 64);
			readBytes = fin.gcount();
			fout.write(bytes, readBytes);
		}
		cout << "문제 7 수행 완료" << endl;
	}
	catch (const char* s) {
		cout << "예외 발생 : " << s << endl;
	}

	fin.close();
	fout.close();
}