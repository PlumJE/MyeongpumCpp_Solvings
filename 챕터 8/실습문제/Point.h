#pragma once

class Point {
	int x, y;
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
};