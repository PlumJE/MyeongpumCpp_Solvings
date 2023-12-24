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
		cout << "선:1, 원:2, 사각형:3 >> ";
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
			cout << "잘못된 선택입니다." << endl;
			break;
		}
	}
	void delShape() {
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> index;

		if (index < 0 || v.size() < index)
			cout << "범위를 벗어났습니다." << endl;
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
		cout << "그래픽 에디터입니다. " << endl;
		choose = 0;
		index = 0;
	}
	void run() {
		while (choose != 4) {
			cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
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
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
};

void num16() {
	GraphicEditor ge;
	ge.run();
}