#include <iostream>
using namespace std;

void num2() {
	int* p = new int[5];

	cout << "정수 5개 입력>> ";
	cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4];
	cin.ignore();

	int sum = 0;
	for (int i = 0; i < 5; ++i)
		sum += p[i];

	cout << "평균 " << (sum / 5.0) << endl;

	delete p;
}