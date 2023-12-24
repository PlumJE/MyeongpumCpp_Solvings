#include <iostream>

void num5() {
	int count = 0;
	char str[100];

	std::cout << "문자들을 입력하라(100개 미만)\n";
	std::cin.getline(str, 100, '\n');

	for (int i = 0; i < 100; ++i)
		if (str[i] == 'x')
			++count;

	std::cout << "x의 개수는 " << count << std::endl;
}