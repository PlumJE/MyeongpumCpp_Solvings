#include <iostream>

void num13() {
	std::cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << std::endl;

	int order = 0, quantity = 0;
	while (order != 4) {
		std::cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		std::cin >> order;

		if (1 <= order && order <= 3) {
			std::cout << "���κ�?";
			std::cin >> quantity;
		}

		switch (order) {
		case 1:
			std::cout << "«�� " << quantity << "�κ� ���Խ��ϴ�" << std::endl;
			break;
		case 2:
			std::cout << "¥��� " << quantity << "�κ� ���Խ��ϴ�" << std::endl;
			break;
		case 3:
			std::cout << "������ " << quantity << "�κ� ���Խ��ϴ�" << std::endl;
			break;
		case 4:
			std::cout << "���� ������ �������ϴ�." << std::endl;
			break;
		default:
			std::cout << "�ٽ� �ֹ��ϼ���!!" << std::endl;
			break;
		}
	}
}