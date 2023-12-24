#include <iostream>
using namespace std;

extern "C" int get();

void mul() {
	int a = get();
	int b = get();
	cout << "°öÀº " << a * b << "ÀÔ´Ï´Ù." << endl;
}