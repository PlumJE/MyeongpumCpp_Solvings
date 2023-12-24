#include <iostream>
using namespace std;

template <class T>
T biggest(T arr[], int len) {
	T big = arr[0];
	for (int i = 1; i < len; ++i)
		if (big < arr[i])
			big = arr[i];
	return big;
}

void num1() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
}