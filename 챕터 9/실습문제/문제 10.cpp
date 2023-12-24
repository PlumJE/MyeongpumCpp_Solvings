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
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> choose;
		return choose;
	}
	static int selectShape() {
		int choose;
		cout << "��:1, ��:2, �簢��:3 >> ";
		cin >> choose;
		return choose;
	}
	static int inputIndex() {
		int index;
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
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
			cout << "���� �Է� ����" << endl;
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
			cout << "�� �̻� ������ ������ �����ϴ�!" << endl;
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
		cout << "�׷��� �������Դϴ�." << endl;
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
				cout << "���α׷��� �����մϴ�. �� ����~" << endl;
				return;
			default:
				cout << "�߸��� �Է��Դϴ�." << endl;
				break;
			}
		}
	}
};

void num10() {
	GraphicEditor* graphic_editor = new GraphicEditor;
	graphic_editor->run();
}