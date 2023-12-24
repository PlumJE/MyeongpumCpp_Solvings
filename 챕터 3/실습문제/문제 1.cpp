#include <iostream>
using namespace std;

class Tower {
private:
	int height;
public:
	Tower() {
		height = 1;
	}
	Tower(int height) {
		this->height = height;
	}
	int getHeight() {
		return height;
	}
};

void num1() {
	Tower myTower; // 1미터
	Tower seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}