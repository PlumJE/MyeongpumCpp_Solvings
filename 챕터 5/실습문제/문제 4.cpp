#include <iostream>
#include <cstdbool>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		big = a;
		return true;
	}
	else {
		big = a > b ? a : b;
		return false;
	}
}

void num4() {
	int a, b;
	int big;
	bool isSame;
	cout << "2개의 정수를 입력 : ";
	cin >> a >> b;

	cout << "두 수는 서로 ";
	if (bigger(a, b, big))
		cout << "같고, ";
	else
		cout << "다르고, ";
	cout << "둘 중에서 가장 큰 수는 " << big << "입니다." << endl;
}