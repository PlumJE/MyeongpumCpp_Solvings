#include <iostream>
using namespace std;

int* concat(int a[], int sizea, int b[], int sizeb) throw(int) {
	if (a == NULL || b == NULL)
		throw (-1);
	if (sizea < 1 || sizeb < 1)
		throw (-2);
	int* result = new int[sizea + sizeb];
	for (int i = 0; i < sizea; ++i)
		result[i] = a[i];
	for (int i = 0; i < sizeb; ++i)
		result[sizea + i] = b[i];
	return result;
}

void num6() {
	int x[] = { 1, 2, 3 ,4 ,5 };
	int y[] = { 10, 20, 30, 40 };
	try {
		int* p = concat(x, 5, y, 4);
		for (int n = 0; n < 9; n++) cout << p[n] << ' ';
		cout << endl;
		delete []p;
	}
	catch (int failCode) {
		cout << "오류 코드 : " << failCode << endl;
	}
}