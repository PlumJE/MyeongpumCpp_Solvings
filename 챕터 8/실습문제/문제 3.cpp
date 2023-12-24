#include <iostream>
#include "Point.h"
using namespace std;

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) : Point(x, y) {
		this->color = color;
	}
	void setPoint(int x, int y) {
		move(x, y);
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << color << "������ (" << getX() << ", " << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};

void num3() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}