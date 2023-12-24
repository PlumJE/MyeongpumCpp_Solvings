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
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다" << endl;
	else cout << "100이 배열 x에 포함되어 있지 않다" << endl;
}