#include <iostream>
#include <string>
using namespace std;

void num6() {
	string text;
	int n;
	int hasalpha;
	srand((unsigned)time(0));

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
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