#include <iostream>
using namespace std;

void half(double& x) {
	x /= 2;
}

void num2() {
	double n = 20;
	half(n);
	cout << n << endl;
}