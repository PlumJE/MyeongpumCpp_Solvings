#include <iostream>
#include <cstdlib>
#include <cstring>

void num15() {
	std::cout << "5칙 연산을 입력하세요. 나가시려면 quit을 입력하세요" << std::endl;

	char input[100];
	char oper;
	int a, b;
	while (1) {
		std::cout << "? ";
		std::cin.getline(input, 100);

		if (strcmp(input, "quit") == 0)
			break;

		a = atoi(strtok(input, " "));
		oper = *(strtok(NULL, " "));
		b = atoi(strtok(NULL, " "));

		std::cout << a << " " << oper << " " << b << " = ";
		switch (oper) {
		case '+':
			std::cout << a + b << std::endl;
			break;
		case '-':
			std::cout << a - b << std::endl;
			break;
		case '*':
			std::cout << a * b << std::endl;
			break;
		case '/':
			std::cout << a / b << std::endl;
			break;
		case '%':
			std::cout << a % b << std::endl;
			break;
		default:
			std::cout << "잘못된 입력" << std::endl;
			break;
		}
	}
}