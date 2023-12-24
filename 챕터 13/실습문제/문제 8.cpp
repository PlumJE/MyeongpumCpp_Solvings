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
		case -1: cout << "����� �ʹ� �۽��ϴ�." << endl; break;
		case -2: cout << "����� �ʹ� Ů�ϴ�." << endl; break;
		case -3: cout << "�޸𸮰� �� �̻� �����ϴ�." << endl; break;
		case -4: cout << "src�� NULL�Դϴ�." << endl; break;
		}
	}
}