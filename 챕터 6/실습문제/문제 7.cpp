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
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextInt(1, 100) << ' ';

	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextAlphabet() << ' ';

	cout << endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; ++i)
		cout << Random::nextDouble() << ' ';
	cout << endl;
}