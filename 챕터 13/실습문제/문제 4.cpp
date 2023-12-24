#include <iostream>
#include <fstream>
using namespace std;

int getFileSize(const char* file) throw(const char*) {
	if (file == NULL)
		throw "���ϸ��� NULL �Դϴ�.";
	ifstream fin(file);
	if (!fin)
		throw "������ ���� ���߽��ϴ�.";

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

void num4() {
	try {
		int n = getFileSize("c:\\windows\\system.ini");
		cout << "���� ũ�� = " << n << endl;
		int m = getFileSize(NULL);
		cout << "���� ũ�� = " << n << endl;
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
	}
}