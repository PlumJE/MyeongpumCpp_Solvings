#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random() {
		srand((unsigned)time(0));
	}
	int next() {
		return rand();
	}
	int nextInRange(int from, int to) {
		int result = rand();
		if (result > to)
			result %= (to + 1);
		if (result < from)
			result += 2;
		return result;
	}
};

void num5() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 10개
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수 10개
		cout << n << ' ';
	}
	cout << endl;
}