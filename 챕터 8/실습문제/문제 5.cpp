#include <iostream>
#include "BaseArray.h"
using namespace std;

class MyQueue : public BaseArray {
	int top;
	int bottom;
public:
	MyQueue(int capacity) : BaseArray(capacity) {
		top = 0;
		bottom = 0;
	}
	void enqueue(int val) {
		put(top++, val);
	}
	int dequeue() {
		int result = get(bottom);
		put(bottom++, 0);
		return result;
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return top - bottom;
	}
};

void num5() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; ++i) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}