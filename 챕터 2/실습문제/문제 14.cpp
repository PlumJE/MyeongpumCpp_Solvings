#include <iostream>
#include <cstring>

void num14() {
	std::cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << std::endl;

	char coffee[100];
	int num, earn = 0, income = 0;
	while (income < 20000) {
		std::cout << "주문>> ";
		std::cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0)
			earn = 2000 * num;
		else if (strcmp(coffee, "아메리카노") == 0)
			earn = 2300 * num;
		else if (strcmp(coffee, "카푸치노") == 0)
			earn = 2500 * num;

		std::cout << earn << "원입니다. 맛있게 드세요" << std::endl;
		income += earn;
	}

	std::cout << "오늘 " << income << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << std::endl;
}