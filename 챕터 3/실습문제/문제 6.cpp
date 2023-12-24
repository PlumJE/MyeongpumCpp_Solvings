#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom() {
		srand((unsigned)time(0));
	}
	int next() {
		int result = rand();
		if (result % 2 == 1)
			result -= 1;
		return result;
	}
	int nextInRange(int from, int to) {
		int result = rand();
		if (result > to)
			result %= (to + 1);
		if (result < from)
			result += 2;
		if (result % 2 == 1)
			result -= 1;
		return result;
	}
};

void num6() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}