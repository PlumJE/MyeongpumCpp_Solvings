#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num6() {
	string ifname = "c:\\windows\\system.ini";
	ifstream fin(ifname);
	if (!fin.is_open()) {
		cout << ifname << "���⿡ �����߽��ϴ�." << endl;
		return;
	}

	// ������ ũ�⸦ ���ϴ� �۾�
	fin.seekg(0, ios::end);
	int filesize = fin.tellg();
	fin.seekg(0, ios::beg);

	string ofname = "c:\\temp\\system.txt";
	ofstream fout(ofname);
	if (!fout.is_open()) {
		cout << ofname << "���⿡ �����߽��ϴ�." << endl;
		return;
	}

	cout << "���� ����..." << endl;
	string line;
	double copiedBytes = 0.0;
	double percentage = 0.1;
	while (!fin.eof()) {
		getline(fin, line);
		fout << line;
		
		copiedBytes += line.length();
		if (copiedBytes / filesize >= percentage) {
			cout << '.' << copiedBytes << "B " << (int)(percentage * 100) << "%" << endl;
			percentage += 0.1;
		}
	}
	cout << filesize << " ���� �Ϸ�" << endl;
	
	fin.close();
	fout.close();
}