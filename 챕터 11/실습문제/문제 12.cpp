#include <iostream>
#include <iomanip>
using namespace std;

class CoffeeSeller {
	int coffee;
	int sugar;
	int cream;
	int water;
	int cup;
	bool consume(int coffee = 0, int sugar = 0, int cream = 0, int water = 0, int cup = 0) {
		bool error = false;
		if (this->coffee < coffee) {
			cout << "Ŀ�ǰ� �����մϴ�!" << endl;
			error = true;
		}
		if (this->sugar < sugar) {
			cout << "������ �����մϴ�!" << endl;
			error = true;
		}
		if (this->cream < cream) {
			cout << "ũ���� �����մϴ�!" << endl;
			error = true;
		}
		if (this->water < water) {
			cout << "���� �����մϴ�!" << endl;
			error = true;
		}
		if (this->cup < cup) {
			cout << "���� �����մϴ�!" << endl;
		}
		
		if (error == true)
			return false;
		else {
			this->coffee -= coffee;
			this->sugar -= sugar;
			this->cream -= cream;
			this->water -= water;
			this->cup -= cup;
			return true;
		}
	}
	void fill() {
		coffee = sugar = cream = water = cup = 3;
	}
	void showAsStar(int num) {
		for (int i = 0; i < num; ++i)
			cout << '*';
		cout << endl;
	}
	void show() {
		cout << "Coffee\t";
		showAsStar(coffee);
		cout << "Sugar\t";
		showAsStar(sugar);
		cout << "Cream\t";
		showAsStar(cream);
		cout << "Water\t";
		showAsStar(water);
		cout << "Cup\t";
		showAsStar(cup);
		cout << endl;
	}
public:
	CoffeeSeller() {
		cout << "------��ǰ Ŀ�� ���Ǳ��մϴ�.------" << endl;
		fill();
		show();
	}
	void run() {
		int choose = -1;
		while (choose != 4) {
			cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4 >> ";
			cin >> choose;

			switch (choose) {
			case 0:
				if (consume(1, 0, 1, 1, 1))
					cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
				show();
				break;
			case 1:
				if (consume(1, 1, 0, 1, 1))
					cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
				show();
				break;
			case 2:
				if (consume(1, 0, 0, 1, 1))
					cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl;
				show();
				break;
			case 3:
				cout << "��� ���� ä��ϴ�.~~" << endl;
				fill();
				show();
				break;
			case 4:
				cout << "�ý����� �����մϴ�..." << endl;
				break;
			default:
				cout << "�߸��� �Է��Դϴ�." << endl;
				break;
			}
		}
	}
};

void num12() {
	CoffeeSeller cs;
	cs.run();
}