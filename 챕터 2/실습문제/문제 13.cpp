#include <iostream>

void num13() {
	std::cout << "***** 승리장에 오신 것을 환영합니다. *****" << std::endl;

	int order = 0, quantity = 0;
	while (order != 4) {
		std::cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
		std::cin >> order;

		if (1 <= order && order <= 3) {
			std::cout << "몇인분?";
			std::cin >> quantity;
		}

		switch (order) {
		case 1:
			std::cout << "짬뽕 " << quantity << "인분 나왔습니다" << std::endl;
			break;
		case 2:
			std::cout << "짜장면 " << quantity << "인분 나왔습니다" << std::endl;
			break;
		case 3:
			std::cout << "군만두 " << quantity << "인분 나왔습니다" << std::endl;
			break;
		case 4:
			std::cout << "오늘 영업은 끝났습니다." << std::endl;
			break;
		default:
			std::cout << "다시 주문하세요!!" << std::endl;
			break;
		}
	}
}