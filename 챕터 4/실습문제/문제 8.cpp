#include <iostream>
#include "Circle.h"
using namespace std;

void num8() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	Circle* circles = new Circle[n];

	int radius;
	for (int i = 0; i < n; ++i) {
		cout << "�� " << (i + 1) << "�� ������ >> ";
		cin >> radius;
		circles[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (circles[i].getArea() > 100)
			++count;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}