#include <iostream>
#include <cstring>

void num14() {
	std::cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << std::endl;

	char coffee[100];
	int num, earn = 0, income = 0;
	while (income < 20000) {
		std::cout << "�ֹ�>> ";
		std::cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0)
			earn = 2000 * num;
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
			earn = 2300 * num;
		else if (strcmp(coffee, "īǪġ��") == 0)
			earn = 2500 * num;

		std::cout << earn << "���Դϴ�. ���ְ� �弼��" << std::endl;
		income += earn;
	}

	std::cout << "���� " << income << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << std::endl;
}