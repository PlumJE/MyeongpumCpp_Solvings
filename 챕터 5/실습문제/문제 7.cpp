#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack() {
		memset(p, NULL, sizeof(p));
		tos = 0;
	}
	bool push(int n) {
		if (tos < 10) {
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

void num7() {
	MyIntStack a;
	for (int i = 0; i < 11; ++i) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; ++i) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}