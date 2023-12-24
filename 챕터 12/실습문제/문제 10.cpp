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
		cout << "파일1의 이름 : ";
		cin >> filename1;
		if (filename1 == "종료")
			break;

		ifstream file1(filename1, ios::binary);
		if (!file1.is_open()) {
			cout << "파일 열기 실패" << endl;
			continue;
		}

		cout << "파일2의 이름 : ";
		cin >> filename2;
		if (filename2 == "종료")
			break;
		
		ifstream file2(filename2, ios::binary);
		if (!file2.is_open()) {
			cout << "파일 열기 실패" << endl;
			continue;
		}

		if (FileCompare(file1, file2) == true)
			cout << "두 파일은 같습니다." << endl;
		else
			cout << "두 파일은 다릅니다." << endl;
	}
}