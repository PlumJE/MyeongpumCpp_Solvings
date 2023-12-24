#include <iostream>

void num3() {
	int x, y;
	std::cout << "두 수를 입력하라>>";
	std::cin >> x >> y;
	std::cout << "큰 수 = " << ((x >= y) ? x : y) << std::endl;
}