#include <iostream>
using namespace std;

template <class T>
bool search(T elmnt, T arr[], int len) {
	for (int i = 0; i < len; ++i)
		if (arr[i] == elmnt)
			return true;
	return false;
}

void num4() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl;
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;
}