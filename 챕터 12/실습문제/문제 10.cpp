#include <iostream>
#include <fstream>
#include <string>
using namespace std;

typedef char byte;
bool FileCompare(ifstream& file1, ifstream& file2) {
	byte b1, b2;
	while (!file1.eof() && !file2.eof()) {
		if (file1.eof() && !file2.eof() || !file1.eof() && file2.eof())
			return false;

		b1 = file1.get();
		b2 = file2.get();
		if (b1 != b2)
			return false;
	}
	return true;
}

void num10() {
	string filename1, filename2;
	while (true) {
		cout << "����1�� �̸� : ";
		cin >> filename1;
		if (filename1 == "����")
			break;

		ifstream file1(filename1, ios::binary);
		if (!file1.is_open()) {
			cout << "���� ���� ����" << endl;
			continue;
		}

		cout << "����2�� �̸� : ";
		cin >> filename2;
		if (filename2 == "����")
			break;
		
		ifstream file2(filename2, ios::binary);
		if (!file2.is_open()) {
			cout << "���� ���� ����" << endl;
			continue;
		}

		if (FileCompare(file1, file2) == true)
			cout << "�� ������ �����ϴ�." << endl;
		else
			cout << "�� ������ �ٸ��ϴ�." << endl;
	}
}