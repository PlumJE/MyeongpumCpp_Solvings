#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model;
	string manufacturer;
	int PrintedCount;
	int availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		PrintedCount = 0;
		this->availableCount = availableCount;
	}
	bool print(int pages) {
		if (pages <= availableCount) {
			PrintedCount += pages;
			availableCount -= pages;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			return true;
		}
		else {
			cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
			return false;
		}
	}
	void show() {
		cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��";
	}
};

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void printInkJet(int pages) {
		bool result = print(pages);
		if (result == true)
			availableInk -= pages;
	}
	void showInkJet() {
		show();
		cout << ", ���� ��ũ " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
	double availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void printLaser(int pages) {
		bool result = print(pages);
		if (result == true)
			availableToner -= pages / 2;
	}
	void showLaser() {
		show();
		cout << ", ���� ��� " << availableToner << endl;
	}
};

void num8() {
	InkJetPrinter *ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter *lp = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	char choice;
	int pages;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ip->showInkJet();
	cout << "������ : "; lp->showLaser();
	cout << endl;

	while (true) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> choice >> pages;
		switch (choice) {
		case '1':
			ip->printInkJet(pages);
			break;
		case '2':
			lp->printLaser(pages);
			break;
		default:
			cout << "�߸��� �Է��Դϴ�." << endl;
			break;
		}

		cout << "��ũ�� : "; ip->showInkJet();
		cout << "������ : "; lp->showLaser();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> choice;
		while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
			cout << "�߸��� �Է��Դϴ�. Y/N���� �Է��ϼ���>>";
			cin >> choice;
		}
		if (choice == 'N' || choice == 'n')
			return;
		cout << endl;
	}

	delete ip, lp;
}