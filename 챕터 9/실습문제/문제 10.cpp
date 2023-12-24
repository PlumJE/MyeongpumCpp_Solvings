#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
	string name;
	Shape* next;
	Shape(string n = "") {
		name = n;
		next = NULL;
	}
};
class Line : public Shape {
public:
	Line() : Shape("Line") {}
};
class Circle : public Shape {
public:
	Circle() : Shape("Circle") {}
};
class Rect : public Shape {
public:
	Rect() : Shape("Rectangle") {}
};
class UI {
public:
	static int menu() {
		int choose;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> choose;
		return choose;
	}
	static int selectShape() {
		int choose;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> choose;
		return choose;
	}
	static int inputIndex() {
		int index;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> index;
		return index;
	}
};

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	bool isEmpty() {
		return pStart == NULL && pLast == NULL;
	}
	void addShape(int n) {
		Shape* temp;
		switch (n) {
		case 1:
			temp = new Line();
			break;
		case 2:
			temp = new Circle();
			break;
		case 3:
			temp = new Rect();
			break;
		default:
			cout << "도형 입력 오류" << endl;
			return;
		}

		if (isEmpty()) {
			pStart = temp;
			pLast = temp;
		}
		else {
			pLast->next = temp;
			pLast = temp;
		}
	}
	void killShape(int index) {
		if (isEmpty()) {
			cout << "더 이상 삭제할 도형이 없습니다!" << endl;
		}
		else {
			Shape* pre_victim = pStart;
			for (int i = 0; i < index - 1; ++i)
				pre_victim = pre_victim->next;
			Shape* victim = pre_victim->next;

			pre_victim->next = pre_victim->next->next;
		}
	}
	void showAll() {
		int index = 0;
		for (Shape* i = pStart; i != NULL; i = i->next)
			cout << index++ << ": " << i->name << endl;
	}
public:
	GraphicEditor() {
		cout << "그래픽 에디터입니다." << endl;
		pStart = pLast = NULL;
	}
	void run() {
		while (true) {
			switch (UI::menu()) {
			case 1:
				addShape(UI::selectShape());
				break;
			case 2:
				killShape(UI::inputIndex());
				break;
			case 3:
				showAll();
				break;
			case 4:
				cout << "프로그램을 종료합니다. 잘 가요~" << endl;
				return;
			default:
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
};

void num10() {
	GraphicEditor* graphic_editor = new GraphicEditor;
	graphic_editor->run();
}