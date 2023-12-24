#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}
string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size) {
	p = new Circle[size];
	this->size = size;

	string name;
	int radius;
	for (int i = 0; i < size; ++i) {
		cout << "�� " << (i + 1) << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {}
void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; ++i) {
		if (p[i].getName() == name) {
			cout << name << "�� ������ " << p[i].getArea() << endl;
			return;
		}
	}
	cout << name << "�� �� ã�ڽ��ϴ�." << endl;
}
void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; ++i) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}

void num12() {
	int num;
	cout << "���� ���� >> ";
	cin >> num;

	CircleManager cm(num);
	cm.searchByName();
	cm.searchByArea();
}