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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}