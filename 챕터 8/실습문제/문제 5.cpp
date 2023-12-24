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
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; ++i) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}