#include <iostream>

void num11() {
	int k, n = 0;
	int sum = 0;
	std::cout << "�� ���� �Է��ϼ���>>";
	std::cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	std::cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << std::endl;
}