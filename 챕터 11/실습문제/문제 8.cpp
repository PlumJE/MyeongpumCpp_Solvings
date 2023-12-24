#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend ostream& operator<< (ostream& cout, Circle& c);
	friend istream& operator>> (istream& cin, Circle& c);
};

ostream& operator<< (ostream& cout, Circle& c) {
	cout << "(반지름" << c.radius << "인 " << c.name << ")";
	return cout;
}

istream& operator>> (istream& cin, Circle& c) {
	cout << "반지름 >> ";
	cin >> c.radius;
	cout << "이름 >> ";
	cin >> c.name;
	return cin;
}

void num8() {
	Circle d, w;
	cin >> d >> w; // 키보드 입력을 받아 객체 d와 w를 완성
	cout << d << w << endl; // 객체 d, w를 출력
}