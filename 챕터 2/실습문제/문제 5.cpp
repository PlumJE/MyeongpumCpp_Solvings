#include <iostream>

void num5() {
	int count = 0;
	char str[100];

	std::cout << "���ڵ��� �Է��϶�(100�� �̸�)\n";
	std::cin.getline(str, 100, '\n');

	for (int i = 0; i < 100; ++i)
		if (str[i] == 'x')
			++count;

	std::cout << "x�� ������ " << count << std::endl;
}