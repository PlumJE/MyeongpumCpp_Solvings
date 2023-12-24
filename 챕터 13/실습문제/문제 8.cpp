#include <iostream>
using namespace std;

int* copy(int* src, int size) throw(int) {
	if (size < 0) throw (-1);
	else if (size > 100) throw (-2);

	int* p = new int[size];
	if (p == NULL) throw (-3);

	if (src == NULL) throw (-4);
	for (int n = 0; n < size; n++)p[n] = src[n];
	return p;
}

void num8() {
	int x[] = { 1,2,3 };
	try {
		int* p = copy(x, 3);
		for (int i = 0; i < 3; i++)cout << p[i] << ' ';
		cout << endl;
		delete []p;
	}
	catch (int i) {
		switch (i) {
		case -1: cout << "사이즈가 너무 작습니다." << endl; break;
		case -2: cout << "사이즈가 너무 큽니다." << endl; break;
		case -3: cout << "메모리가 더 이상 없습니다." << endl; break;
		case -4: cout << "src가 NULL입니다." << endl; break;
		}
	}
}