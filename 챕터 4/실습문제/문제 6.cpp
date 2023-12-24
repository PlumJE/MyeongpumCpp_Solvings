#include <iostream>
#include <string>
using namespace std;

void num6() {
	string text;
	int n;
	int hasalpha;
	srand((unsigned)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, text, '\n');

		if (text == "exit")
			break;

		for (int i = text.length(); i >= 0; --i) {
			cout << text[i];
		}
		cout << endl;
	}
}