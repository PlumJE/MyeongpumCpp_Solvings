#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	Circle(double radius) {
		this->radius = radius;
	}
	double getRadius() {
		return radius;
	}
};

void swap(Circle& a, Circle& b) {
	Circle temp = a;
	a = b;
	b = temp;
}

void num1() {
	Circle pizza(15), donut(5);
	swap(pizza, donut);
	cout << "pizza : " << pizza.getRadius() << endl << "donut : " << donut.getRadius() << endl;
}