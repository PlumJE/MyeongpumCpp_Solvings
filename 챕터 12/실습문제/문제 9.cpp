#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void num9() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "파일 열기 실패" << endl;
		return;
	}

	vector<string> lines;
	string line;
	while (!fin.eof()) {
		getline(fin, line);
		lines.push_back(line);
	}
	cout << filename << "파일 읽기 완료" << endl;

	int choose = 1;
	cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;
	while (choose > 0) {
		cout << ": ";
		cin >> choose;

		if (0 < choose && choose < lines.size())
			cout << lines[choose - 1] << endl;
	}
	cout << "종료 합니다." << endl;
}