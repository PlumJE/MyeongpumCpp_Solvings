#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void num9() {
	string filename = "c:\\windows\\system.ini";
	ifstream fin(filename);
	if (!fin.is_open()) {
		cout << filename << "���� ���� ����" << endl;
		return;
	}

	vector<string> lines;
	string line;
	while (!fin.eof()) {
		getline(fin, line);
		lines.push_back(line);
	}
	cout << filename << "���� �б� �Ϸ�" << endl;

	int choose = 1;
	cout << "���� ��ȣ�� �Է��ϼ���. 1���� ���� ���� �Է��ϸ� ����" << endl;
	while (choose > 0) {
		cout << ": ";
		cin >> choose;

		if (0 < choose && choose < lines.size())
			cout << lines[choose - 1] << endl;
	}
	cout << "���� �մϴ�." << endl;
}