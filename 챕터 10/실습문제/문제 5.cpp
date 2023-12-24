#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* result = new T[sizea + sizeb];
	for (int i = 0; i < sizea; ++i)
		result[i] = a[i];
	for (int i = 0; i < sizeb; ++i)
		result[i + sizea] = b[i];
	return result;
}

void num5() {
	char a[] = "Hello,";
	char b[] = " world!";
	char* c = concat(a, 6, b, 8);
	for (int i = 0; i < 14; ++i)
		cout << c[i];
	cout << endl;
}