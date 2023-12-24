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
			cout << "프린트하였습니다." << endl;
			return true;
		}
		else {
			cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
			return false;
		}
	}
	void show() {
		cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장";
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
		cout << ", 남은 잉크 " << availableInk << endl;
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
		cout << ", 남은 토너 " << availableToner << endl;
	}
};

void num8() {
	InkJetPrinter *ip = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter *lp = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	char choice;
	int pages;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; ip->showInkJet();
	cout << "레이저 : "; lp->showLaser();
	cout << endl;

	while (true) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> choice >> pages;
		switch (choice) {
		case '1':
			ip->printInkJet(pages);
			break;
		case '2':
			lp->printLaser(pages);
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
			break;
		}

		cout << "잉크젯 : "; ip->showInkJet();
		cout << "레이저 : "; lp->showLaser();

		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> choice;
		while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
			cout << "잘못된 입력입니다. Y/N으로 입력하세요>>";
			cin >> choice;
		}
		if (choice == 'N' || choice == 'n')
			return;
		cout << endl;
	}

	delete ip, lp;
}