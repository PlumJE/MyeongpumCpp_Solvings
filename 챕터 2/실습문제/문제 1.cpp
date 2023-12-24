#include <iostream>

void num1() {
	for (int i = 1; i <= 100; ++i) {
		std::cout << i << "\t";
		if (i % 10 == 0)
			std::cout << std::endl;
	}
}