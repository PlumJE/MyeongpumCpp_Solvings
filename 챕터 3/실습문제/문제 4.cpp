#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar) {
		this->coffee = coffee;
		this->water = water;
		this->sugar = sugar;
	}
	void drinkEspresso() {
		coffee -= 1;
		water -= 1;
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
	void show() {
		cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
};

void num4() {
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}