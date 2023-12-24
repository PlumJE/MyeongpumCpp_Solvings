#include <iostream>
using namespace std;

class Stack {
	int *stack;
	int top;
public:
	Stack() {
		stack = new int[1000];
		top = 0;
	}
	Stack& operator<< (int a) {
		this->stack[top++] = a;
		return *this;
	}
	Stack& operator>> (int& a) {
		a = this->stack[--top];
		this->stack[top] = NULL;
		return *this;
	}
	bool operator! () {
		if (top == 0)
			return true;
		else
			return false;
	}
};

void num11() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}