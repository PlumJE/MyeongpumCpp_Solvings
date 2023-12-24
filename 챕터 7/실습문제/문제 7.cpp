#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix& operator<< (Matrix& dest, int src[]) {
	for (int i = 0; i < 4; ++i)
		dest.data[i] = src[i];
	return dest;
}
Matrix& operator>> (Matrix& src, int* dest) {	//¹Ì¿Ï¼º
	for (int i = 0; i < 4; ++i)
		dest[i] = src.data[i];
	return src;
}

void num7() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; ++i) cout << x[i] << ' ';
	cout << endl;
	b.show();
}