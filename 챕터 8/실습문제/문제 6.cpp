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
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; ++i) {
		cin >> n;
		mStack.push(n);
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}