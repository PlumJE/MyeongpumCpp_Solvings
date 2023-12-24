#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int* stack;
	int top;
	int capacity;
public:
	IntStack(int c) {
		stack = new int[c];
		top = 0;
		capacity = c;
	}
	bool push(int n) {
		if (top < capacity) {
			stack[top++] = n;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(int& n) {
		if (0 <= top) {
			n = stack[--top];
			stack[top] = 0;
			return true;
		}
		else {
			return false;
		}
	}
	int size() {
		return top;
	}
};

void num6() {
	int c, n;
	cout << "������ ũ�⸦ �Է�>>";
	cin >> c;
	IntStack is(c);

	cout << "���ÿ� push�� ���ҵ�>>";
	for (int i = 0; i < c; ++i) {
		cin >> n;
		is.push(n);
	}

	cout << "���ÿ��� pop�� ���ҵ�>>";
	for (int i = 0; i < c; ++i) {
		is.pop(n);
		cout << n << ' ';
	}
	cout << endl;
}