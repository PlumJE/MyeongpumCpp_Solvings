#include <iostream>
#include "BaseArray.h"
using namespace std;

class MyStack : public BaseArray {
	int top;
public:
	MyStack(int capacity) : BaseArray(capacity) {
		top = 0;
	}
	void push(int val) {
		put(top++, val);
	}
	int pop() {
		int result = get(--top);
		put(top, 0);
		return result;
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return top;
	}
};

void num6() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; ++i) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}