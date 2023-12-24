#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix operator+ (Matrix sbj, Matrix obj) {
	Matrix result;
	for (int i = 0; i < 4; ++i)
		result.data[i] = sbj.data[i] + obj.data[i];
	return result;
}
Matrix& operator+=(Matrix sbj, Matrix obj) {
	for (int i = 0; i < 4; ++i)
		sbj.data[i] += obj.data[i];
	return sbj;
}
bool operator==(Matrix sbj, Matrix obj) {
	for (int i = 0; i < 4; ++i)
		if (sbj.data[i] != obj.data[i])
			return false;
	return true;
}

void num6() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}