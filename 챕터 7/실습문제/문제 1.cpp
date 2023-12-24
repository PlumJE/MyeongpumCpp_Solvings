#include "Book.h"

Book& Book::operator+= (int incr) {
	this->price += incr;
	return *this;
}
Book& Book::operator-= (int decr) {
	this->price -= decr;
	return *this;
}

void num1() {
	Book a("รปรแ", 20000, 300), b("นฬทก", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}