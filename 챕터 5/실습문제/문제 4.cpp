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
	cout << "2���� ������ �Է� : ";
	cin >> a >> b;

	cout << "�� ���� ���� ";
	if (bigger(a, b, big))
		cout << "����, ";
	else
		cout << "�ٸ���, ";
	cout << "�� �߿��� ���� ū ���� " << big << "�Դϴ�." << endl;
}