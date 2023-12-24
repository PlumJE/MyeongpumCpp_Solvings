#include <iostream>
using namespace std;

int get() throw(char*) {
	int a, b;
	cout << "0~9 사이의 정수 입력 : ";
	cin >> a;
	cout << "0~9 사이의 정수 입력 : ";
	cin >> b;
	if (a < 0 || 9 < a || b < 0 || 9 < b)
		throw "input fault";
	cout << a << 'x' << b << '=';
	return a * b;
}

void num3() {
	char choose = '\0';
	int result;
	while (true) {
		try {
			result = get();
			cout << result << endl;
		}
		catch (const char* str) {
			cout << str << " 예외 발생, 계산할 수 없음" << endl;
		}

		cout << "계속 하시겠습니까(y/n)? ";
		cin >> choose;
		if (choose == 'N' || choose == 'n')
			break;
	}
}