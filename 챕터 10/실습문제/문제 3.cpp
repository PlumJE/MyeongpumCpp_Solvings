#include <iostream>
using namespace std;

template <class T>
void reverseArray(T* arr, int len) {
	T temp;
	int j;
	for (int i = 0; i < len / 2.0; ++i) {
		j = len - 1 - i;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void num3() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
	cout << endl;
}