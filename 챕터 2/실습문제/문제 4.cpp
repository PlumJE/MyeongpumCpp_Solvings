#include <iostream>

void num4() {
	float set[5];
	int max = 0;

	std::cout << "5���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; ++i)
		std::cin >> set[i];
	std::cin.ignore();	//cin���� �� 1���� ���ڸ� ����Ѵ�.

	for (int i = 0; i < 5; ++i)
		if (set[max] < set[i])
			max = i;

	std::cout << "���� ū �� = " << set[max] << std::endl;
}