#include <iostream>
#include <fstream>
#include <string>
using namespace std;

typedef char byte;
void num14() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename, ios::binary);

	byte *b = new byte;
	int filesize = 0;
	while (!fin.eof()) {
		fin.read(b, 1);
		//cout << *b << ' ';
		++filesize;
	}
	cout << "c:\\windows\\system.ini의 크기는 " << filesize << "B" << endl;
}