#include <iostream>
#include <string>
using namespace std;

void num6() {
	string password, password_;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> password_;

	if (password == password_)
		cout << "�����ϴ�" << endl;
	else
		cout << "�ٸ��ϴ�" << endl;
}