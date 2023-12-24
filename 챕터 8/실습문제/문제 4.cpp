#include <iostream>
#include "Point.h"
using namespace std;

class ColorPoint : public Point {
	string color;
public:
	ColorPoint() : Point(0, 0) {
		this->color = "BLACK";
	}
	ColorPoint(int x, int y) : Point(x, y) {
		this->color = "BLACK";
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
	}
};

void num4() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}