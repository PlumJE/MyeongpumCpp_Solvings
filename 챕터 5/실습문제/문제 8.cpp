#include <iostream>
using namespace std;

class MyIntStack_ {
	int* p;
	int size;
	int tos;
public:
	MyIntStack_() {
		MyIntStack_(10);
	}
	MyIntStack_(int size) {
		this->size = size;
		p = new int[size];
		memset(p, NULL, size);
		tos = 0;
	}
	MyIntStack_(MyIntStack_& s) {
		this->size = s.size;
		p = new int[size];
		memset(p, NULL, size);
		tos = 0;
	}
	~MyIntStack_() {}
	bool push(int n) {
		if (tos < size) {
			p[tos++] = n;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(int& n) {
		if (tos > 0) {
			n = p[--tos];
			p[tos] = NULL;
			return true;
		}
		else {
			return false;
		}
	}
};

void num8() {
	MyIntStack_ a(10);
	a.push(10);
	a.push(20);
	MyIntStack_ b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}