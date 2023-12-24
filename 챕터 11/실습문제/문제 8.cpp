#include <iostream>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend ostream& operator<< (ostream& cout, Circle& c);
	friend istream& operator>> (istream& cin, Circle& c);
};

ostream& operator<< (ostream& cout, Circle& c) {
	cout << "(������" << c.radius << "�� " << c.name << ")";
	return cout;
}

istream& operator>> (istream& cin, Circle& c) {
	cout << "������ >> ";
	cin >> c.radius;
	cout << "�̸� >> ";
	cin >> c.name;
	return cin;
}

void num8() {
	Circle d, w;
	cin >> d >> w; // Ű���� �Է��� �޾� ��ü d�� w�� �ϼ�
	cout << d << w << endl; // ��ü d, w�� ���
}