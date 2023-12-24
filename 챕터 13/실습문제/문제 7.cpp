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
			throw (ifname + "���� ���� ����");


		if (!fout.is_open())
			throw (ofname + "���� ���� ����");

		byte bytes[64];
		int readBytes;
		while (!fin.eof()) {
			fin.read(bytes, 64);
			readBytes = fin.gcount();
			fout.write(bytes, readBytes);
		}
		cout << "���� 7 ���� �Ϸ�" << endl;
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
	}

	fin.close();
	fout.close();
}