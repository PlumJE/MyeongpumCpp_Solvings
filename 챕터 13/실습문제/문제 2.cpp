#include <iostream>
using namespace std;

void num2() {
	int score;
	cout << "������ �Է��ϼ��� : ";
	cin >> score;

	try {
		if (score < 0 || 100 < score)
			throw "�ùٸ� ���� ������ �ƴմϴ�.";

		if (score < 60)
			cout << "F";
		else if (score < 70)
			cout << "D";
		else if (score < 80)
			cout << "C";
		else if (score < 90)
			cout << "B";
		else if (score <= 100)
			cout << "A";
		cout << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}