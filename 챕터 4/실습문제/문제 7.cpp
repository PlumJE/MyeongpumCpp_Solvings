#include <iostream>
#include "Circle.h"
using namespace std;

void num7() {
	Circle circles[3];
	int radius;
	for (int i = 0; i < 3; ++i) {
		cout << "원 " << (i + 1) << "의 반지름 >> ";
		cin >> radius;
		circles[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < 3; ++i) {
		if (circles[i].getArea() > 100)
			++count;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
}