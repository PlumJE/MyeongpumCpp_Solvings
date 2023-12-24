#include <iostream>
using namespace std;

/*int big(int a, int b) {
	int max = a > b ? a : b;
	return max < 100 ? max : 100;
}

int big(int a, int b, int c) {
	int max = a > b ? a : b;
	return max < c ? max : c;
}*/

int big(int a, int b, int c = 100) {
	int max = a > b ? a : b;
	return max < c ? max : c;
}

void num3() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}