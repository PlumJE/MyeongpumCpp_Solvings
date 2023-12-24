#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void num6() {
	string ifname = "c:\\windows\\system.ini";
	ifstream fin(ifname);
	if (!fin.is_open()) {
		cout << ifname << "열기에 실패했습니다." << endl;
		return;
	}

	// 파일의 크기를 구하는 작업
	fin.seekg(0, ios::end);
	int filesize = fin.tellg();
	fin.seekg(0, ios::beg);

	string ofname = "c:\\temp\\system.txt";
	ofstream fout(ofname);
	if (!fout.is_open()) {
		cout << ofname << "열기에 실패했습니다." << endl;
		return;
	}

	cout << "복사 시작..." << endl;
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
	cout << filesize << " 복사 완료" << endl;
	
	fin.close();
	fout.close();
}