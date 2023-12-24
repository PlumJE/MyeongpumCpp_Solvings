#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};
void Container::fill() {
	size = 10;
}
void Container::consume() {
	--size;
}
int Container::getSize() {
	return size;
}

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};
void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; ++i) {
		tong[i].fill();
	}
	show();
}
void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}
void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}
void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}
void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() {
	int choice;
	while (1) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���, 6:����)>> ";
		cin >> choice;

		switch (choice) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		case 6:
			return;
		default:
			cout << "�߸��� �Է��Դϴ�." << endl;
			break;
		}
	}
}

void num11() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;

	CoffeeVendingMachine cvm;
	cvm.run();

	cout << "***** Ŀ�����Ǳ⸦ �����մϴ�. *****" << endl;
}