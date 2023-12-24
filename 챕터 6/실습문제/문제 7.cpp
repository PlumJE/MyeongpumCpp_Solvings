#include <iostream>
using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767) {
		int result;
		do {
			result = rand();
		} while (result < min || max < result);
		return result;
	}
	static char nextAlphabet() {
		char result;
		do {
			result = nextInt();
		} while (result < 65 || (90 < result && result < 97) || 122 < result);
		return result;
	}
	static double nextDouble() {
		double result = nextInt();
		while (result < 0 || 1 <= result)
			result /= 10;
		return result;
	}
};

void num7() {
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextInt(1, 100) << ' ';

	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextAlphabet() << ' ';

	cout << endl << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextDouble() << ' ';
	cout << endl;
}