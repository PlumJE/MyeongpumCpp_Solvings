#include <iostream>
#include <string>
using namespace std;

void num6() {
	string password, password_;
	cout << "새 암호를 입력하세요>>";
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> password_;

	if (password == password_)
		cout << "같습니다" << endl;
	else
		cout << "다릅니다" << endl;
}