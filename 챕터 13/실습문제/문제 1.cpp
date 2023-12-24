#include <iostream>
#include <cstring>
using namespace std;

int sum(int a, int b) {
	if (a > b) {
		throw "잘못된 입력";
	}
	if (a < 0 || b < 0) {
		throw "음수 처리 안됨";
	}
	int result = 0;
	for (int i = a; i <= b; ++i)
		result += i;
	return result;
}

void num1() {
	try {
		cout << sum(2, 5) << endl;
		cout << sum(-1, 5) << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}