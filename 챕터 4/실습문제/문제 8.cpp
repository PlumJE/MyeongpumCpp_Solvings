#include <iostream>
#include "Circle.h"
using namespace std;

void num8() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	Circle* circles = new Circle[n];

	int radius;
	for (int i = 0; i < n; ++i) {
		cout << "원 " << (i + 1) << "의 반지름 >> ";
		cin >> radius;
		circles[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (circles[i].getArea() > 100)
			++count;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
}