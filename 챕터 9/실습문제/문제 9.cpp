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
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void print(int pages) {
		if (pages <= availableCount && pages <= availableInk) {
			PrintedCount += pages;
			availableCount -= pages;
			availableInk -= pages;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
		else {
			if (pages > availableCount)
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
			else if (pages > availableInk)
				cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
		}
	}
	void show() {
		cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��, ���� ��ũ " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
	double availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void print(int pages) {
		if (pages <= availableCount && pages / 2 <= availableToner) {
			PrintedCount += pages;
			availableCount -= pages;
			availableToner -= pages / 2.0;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
		else {
			if (pages > availableCount)
				cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
			else if (pages / 2 > availableToner)
				cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
		}
	}
	void show() {
		cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��, ���� ��� " << availableToner << endl;
	}
};

void num9() {
	InkJetPrinter* ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* lp = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	char choice;
	int pages;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; ip->show();
	cout << "������ : "; lp->show();

	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> choice >> pages;
		switch (choice) {
		case '1':
			ip->print(pages);
			break;
		case '2':
			lp->print(pages);
			break;
		default:
			cout << "�߸��� �Է��Դϴ�." << endl;
			break;
		}

		cout << "��ũ�� : "; ip->show();
		cout << "������ : "; lp->show();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> choice;
		while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
			cout << "�߸��� �Է��Դϴ�. Y/N���� �Է��ϼ���>>";
			cin >> choice;
		}
		if (choice == 'N' || choice == 'n')
			return;
	}

	delete ip, lp;
}