#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

class GraphicEditor {
	vector<Shape*> v;
	int choose, index;
	void addShape() {
		cout << "��:1, ��:2, �簢��:3 >> ";
		cin >> choose;

		switch (choose) {
		case 1:
			v.push_back(new Line());
			break;
		case 2:
			v.push_back(new Circle());
			break;
		case 3:
			v.push_back(new Rect());
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}
	void delShape() {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		cin >> index;

		if (index < 0 || v.size() < index)
			cout << "������ ������ϴ�." << endl;
		else
			v.erase(v.begin() + index);
	}
	void showAll() {
		for (int i = 0; i < v.size(); ++i) {
			cout << i << " : ";
			v[i]->paint();
		}
	}
public:
	GraphicEditor() {
		cout << "�׷��� �������Դϴ�. " << endl;
		choose = 0;
		index = 0;
	}
	void run() {
		while (choose != 4) {
			cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
			cin >> choose;

			switch (choose) {
			case 1:
				addShape();
				break;
			case 2:
				delShape();
				break;
			case 3:
				showAll();
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

void num16() {
	GraphicEditor ge;
	ge.run();
}