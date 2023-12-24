#include <iostream>
#include <string>
using namespace std;

void num5() {
	string input;
	int n;

	while (true) {
		cout << "양수입력>> ";
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
			cout << "잘못된 입력입니다. 1~9사이의 정수만 입력하세요" << endl;
		}
		catch (string s) {
			cout << "입력오류가 발생하여 더 이상 입력되지 않습니다.프로그램을 종료합니다." << endl;
			break;
		}
	}
}