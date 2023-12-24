#include <iostream>

void num4() {
	float set[5];
	int max = 0;

	std::cout << "5개의 실수를 입력하라>>";
	for (int i = 0; i < 5; ++i)
		std::cin >> set[i];
	std::cin.ignore();	//cin버퍼 속 1개의 문자를 폐기한다.

	for (int i = 0; i < 5; ++i)
		if (set[max] < set[i])
			max = i;

	std::cout << "제일 큰 수 = " << set[max] << std::endl;
}