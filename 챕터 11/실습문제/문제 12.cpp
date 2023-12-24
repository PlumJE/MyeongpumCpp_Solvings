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
			cout << "커피가 부족합니다!" << endl;
			error = true;
		}
		if (this->sugar < sugar) {
			cout << "설탕이 부족합니다!" << endl;
			error = true;
		}
		if (this->cream < cream) {
			cout << "크림이 부족합니다!" << endl;
			error = true;
		}
		if (this->water < water) {
			cout << "물이 부족합니다!" << endl;
			error = true;
		}
		if (this->cup < cup) {
			cout << "컵이 부족합니다!" << endl;
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
		cout << "------명품 커피 자판기켭니다.------" << endl;
		fill();
		show();
	}
	void run() {
		int choose = -1;
		while (choose != 4) {
			cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4 >> ";
			cin >> choose;

			switch (choose) {
			case 0:
				if (consume(1, 0, 1, 1, 1))
					cout << "맛있는 보통 커피 나왔습니다~~" << endl;
				show();
				break;
			case 1:
				if (consume(1, 1, 0, 1, 1))
					cout << "맛있는 설탕 커피 나왔습니다~~" << endl;
				show();
				break;
			case 2:
				if (consume(1, 0, 0, 1, 1))
					cout << "맛있는 블랙 커피 나왔습니다~~" << endl;
				show();
				break;
			case 3:
				cout << "모든 통을 채웁니다.~~" << endl;
				fill();
				show();
				break;
			case 4:
				cout << "시스템을 종료합니다..." << endl;
				break;
			default:
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
};

void num12() {
	CoffeeSeller cs;
	cs.run();
}