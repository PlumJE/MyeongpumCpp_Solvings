#include <iostream>
#include <string>
using namespace std;

void num5() {
	string cmd;
	cout << "getline(istream&, string&)�� ���ڿ��� �н��ϴ�." << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, cmd);
		if (cmd == "exit") {
			cout << "���α׷��� �����մϴ�...." << endl;
			return;
		}
	}
}