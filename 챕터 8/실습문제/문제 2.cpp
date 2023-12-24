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
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
};

void num2() {
	NamedCircle pizza[5];
	int radius;
	string name;

	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; ++i) {
		cout << ">>";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	int champion = 0;
	for (int i = 0; i < 5; ++i)
		if (pizza[champion].getRadius() < pizza[i].getRadius())
			champion = i;
	cout << "���� ������ ū ���ڴ� " << pizza[champion].getName() << "�Դϴ�" << endl;
}