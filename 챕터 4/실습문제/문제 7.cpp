#include <iostream>
#include "Circle.h"
using namespace std;

void num7() {
	Circle circles[3];
	int radius;
	for (int i = 0; i < 3; ++i) {
		cout << "�� " << (i + 1) << "�� ������ >> ";
		cin >> radius;
		circles[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < 3; ++i) {
		if (circles[i].getArea() > 100)
			++count;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}