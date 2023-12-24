#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom() {
		srand((unsigned)time(0));
	}
	int nextEven() {
		int result = rand();
		if (result % 2 == 1)
			result -= 1;
		return result;
	}
	int nextOdd() {
		int result = rand();
		if (result % 2 == 0)
			result += 1;
		return result;
	}
	int nextEvenInRange(int from, int to) {
		int result = rand();
		if (result > to)
			result %= (to + 1);
		if (result < from)
			result += 2;
		if (result % 2 == 1)
			result -= 1;
		return result;
	}
	int nextOddInRange(int from, int to) {
		int result = rand();
		if (result > to)
			result %= (to + 1);
		if (result < from)
			result += 2;
		if (result % 2 == 0)
			result += 1;
		return result;
	}
};

void num7() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9까지의 랜덤 홀수 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextOddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}