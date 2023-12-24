#include <iostream>
#include <string>
using namespace std;

void num5() {
	string input;
	int n;

	while (true) {
		cout << "����Է�>> ";
		cin >> input;
		try {
			if (input.find_first_not_of("-0123456789") != string::npos)
				throw input;
			else
				n = stoi(input);

			if (n < 1 || 9 < n)
				throw n;

			for (int i = 1; i <= 9; ++i)
				cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		catch (int i) {
			cout << "�߸��� �Է��Դϴ�. 1~9������ ������ �Է��ϼ���" << endl;
		}
		catch (string s) {
			cout << "�Է¿����� �߻��Ͽ� �� �̻� �Էµ��� �ʽ��ϴ�.���α׷��� �����մϴ�." << endl;
			break;
		}
	}
}