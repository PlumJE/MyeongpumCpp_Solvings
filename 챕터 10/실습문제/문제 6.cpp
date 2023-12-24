#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T* result = new T[sizeSrc];
	bool included;
	int k = 0;
	for (int i = 0; i < sizeSrc; ++i) {
		included = false;
		for (int j = 0; j < sizeMinus; ++j)
			if (src[i] == minus[j])
				included = true;
		if (!included)
			result[k++] = src[i];
	}
	retSize = k;
	return result;
}

void num6() {
	int x[] = { 1, 2, 3, 4, 5, 6 };
	int y[] = { 1, 3, 5, 7, 9 };

	int n;
	remove(x, 6, y, 5, n);
	cout << "n = " << n << ' ';

	int* z = new int[n];
	z = remove(x, 6, y, 5, n);
	cout << "x-y : ";
	for (int i = 0; i < n; ++i)
		cout << z[i] << ' ';
	cout << endl;
}