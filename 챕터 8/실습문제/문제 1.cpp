#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") : Circle(radius) {
		this->name = name;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};

void num1() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}