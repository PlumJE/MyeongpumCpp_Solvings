#pragma once
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }

	friend Circle& operator++ (Circle& sbj);
	friend Circle operator++ (Circle& sbj, int vain);
	friend Circle operator+ (Circle oprand1, Circle oprand2);
};