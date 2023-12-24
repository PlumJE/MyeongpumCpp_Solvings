#include "Circle.h"

Circle operator+ (Circle oprand1, Circle oprand2) {
	Circle result;
	result.radius = oprand1.radius + oprand2.radius;
	return result;
}

void num9() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}