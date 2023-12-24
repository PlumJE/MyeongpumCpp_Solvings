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
		cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
		cin >> radius >> name;
		v.push_back(new Circle(radius, name));
	}
	void deleteCircle() {
		cout << "삭제하고자 하는 원의 이름은 >> ";
		cin >> name;

		int index;
		for (index = 0; index < v.size(); ++index)
			if (v[index]->getName() == name)
				break;
		if (index < v.size())
			v.erase(v.begin() + index);
		else
			cout << "삭제할 원을 못 찾겠습니다" << endl;
	}
	void showCircle() {
		for(int i = 0; i < v.size(); ++i)
			cout << v[i]->getName() << endl;
		cout << endl;
	}
public:
	MainProgram() {
		cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
		choose = 0;
		radius = 0;
		name = "";
	}
	void run() {
		while (choose != 4) {
			cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
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
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
};

void num15() {
	MainProgram mp;
	mp.run();
}