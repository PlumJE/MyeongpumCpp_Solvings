#include <iostream>

void num2() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j)
			std::cout << i << "*" << j << "=" << i * j << "\t";
		std::cout << std::endl;
	}
}