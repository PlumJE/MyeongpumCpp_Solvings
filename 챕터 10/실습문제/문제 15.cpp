#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
	bool operator==(const Circle& op2) {
		if (this->radius == op2.radius && this->name == op2.name)
			return true;
		else
			return false;
	}
};

class MainProgram {
	vector<Circle*> v;
	int choose, radius;
	string name;
	void createCircle() {
		cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
		cin >> radius >> name;
		v.push_back(new Circle(radius, name));
	}
	void deleteCircle() {
		cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
		cin >> name;

		int index;
		for (index = 0; index < v.size(); ++index)
			if (v[index]->getName() == name)
				break;
		if (index < v.size())
			v.erase(v.begin() + index);
		else
			cout << "������ ���� �� ã�ڽ��ϴ�" << endl;
	}
	void showCircle() {
		for(int i = 0; i < v.size(); ++i)
			cout << v[i]->getName() << endl;
		cout << endl;
	}
public:
	MainProgram() {
		cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
		choose = 0;
		radius = 0;
		name = "";
	}
	void run() {
		while (choose != 4) {
			cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
			cin >> choose;

			switch (choose) {
			case 1:
				createCircle();
				break;
			case 2:
				deleteCircle();
				break;
			case 3:
				showCircle();
				break;
			case 4:
				break;
			default:
				cout << "�߸��� �Է��Դϴ�." << endl;
				break;
			}
		}
	}
};

void num15() {
	MainProgram mp;
	mp.run();
}