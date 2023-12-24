#include <iostream>
using namespace std;

void num4() {
	for (int y = 0; y < 4; ++y) {
		for (int x = 0; x < y + 1; ++x)
			cout << "*";
		cout << endl;
	}
}