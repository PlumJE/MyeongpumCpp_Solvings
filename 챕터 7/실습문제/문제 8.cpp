#include "Circle.h"

Circle& operator++ (Circle& sbj) {
	++sbj.radius;
	return sbj;
}
Circle operator++ (Circle& sbj, int vain) {
	Circle temp = sbj;
	++sbj.radius;
	return temp;
}

void num8() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}