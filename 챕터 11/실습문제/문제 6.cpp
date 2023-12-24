#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void num6() {
	cout.setf(ios::left);
	cout << setw(15) << "Number";
	cout << setw(15) << "Square";
	cout << setw(15) << "Square Root" << endl;
	
	for (int i = 0; i < 50; i += 5) {
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << i * i;
		cout << setw(15) << setfill('_') << setprecision(3) << sqrt(i) << endl;
	}
}