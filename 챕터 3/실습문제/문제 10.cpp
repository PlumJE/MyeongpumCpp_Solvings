#include <iostream>
#include "���� 10.h"

void Add::setValue(int x, int y) { a = x; b = y; }
void Sub::setValue(int x, int y) { a = x; b = y; }
void Mul::setValue(int x, int y) { a = x; b = y; }
void Div::setValue(int x, int y) { a = x; b = y; }

int Add::calculate() { return a + b; }
int Sub::calculate() { return a - b; }
int Mul::calculate() { return a * b; }
int Div::calculate() { return a / b; }

void num10() {
	Add a; Sub s; Mul m; Div d;
	int x, y;
	char oper;
	while (1) {
		std::cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		std::cin >> x >> y >> oper;

		switch (oper) {
		case '+':
			a.setValue(x, y);
			std::cout << a.calculate();
			break;
		case '-':
			s.setValue(x, y);
			std::cout << s.calculate();
			break;
		case '*':
			m.setValue(x, y);
			std::cout << m.calculate();
			break;
		case '/':
			d.setValue(x, y);
			std::cout << d.calculate();
			break;
		default:
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
			return;
		}
		std::cout << std::endl;
	}
}