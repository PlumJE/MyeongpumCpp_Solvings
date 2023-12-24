#include <iostream>
using namespace std;

class Color {
	int r, g, b;
public:
	Color() {
		Color(0, 0, 0);
	}
	Color(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}
	void show() {
		cout << r << ' ' << g << ' ' << b << endl;
	}
	Color operator+ (Color oprand) {
		Color result;
		result.r = this->r + oprand.r;
		result.g = this->g + oprand.g;
		result.b = this->b + oprand.b;
		return result;
	}
	bool operator== (Color oprand) {
		if (this->r == oprand.r && this->g == oprand.g && this->b == oprand.b)
			return true;
		else
			return false;
	}
};

void num5() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
	cout << endl;
}