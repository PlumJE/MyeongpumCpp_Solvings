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
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ���� 10��
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; ++i) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ���� 10��
		cout << n << ' ';
	}
	cout << endl;
}