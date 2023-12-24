#include <iostream>
using namespace std;

class Comparable {
public:
	virtual bool operator> (Comparable& op2) = 0;
	virtual bool operator< (Comparable& op2) = 0;
	virtual bool operator== (Comparable& op2) = 0;
};

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator> (Circle& op2) {
		return this->radius > op2.radius;
	}
	bool operator< (Circle &op2) {
		return this->radius < op2.radius;
	}
	bool operator== (Circle &op2) {
		return this->radius == op2.radius;
	}
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

void num8() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza중 큰 것의 반지름은 " << y.getRadius() << endl;
}