#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* result = new int[size * 2];

		for (int i = 0; i < size; ++i)
			result[i] = s1[i];
		for (int i = 0; i < size; ++i)
			result[i + size] = s2[i];
		return result;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* result = new int[size];

		int i, j, k = 0;
		for (i = 0; i < size; ++i) {
			for (j = 0; j < size; ++j)
				if (s1[i] == s2[j])
					break;
			if (j == size)
				result[k++] = s1[i];
		}

		retSize = k;
		return result;
	}
};

void num6() {
	int x[5], y[5];
	int* z;
	const int length = 5;
	int shrinked_len;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; ++i)
		cin >> x[i];

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; ++i)
		cin >> y[i];

	z = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; ++i)
		cout << z[i] << ' ';
	cout << endl;

	z = ArrayUtility2::remove(x, y, 5, shrinked_len);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << shrinked_len << endl;
	for (int i = 0; i < shrinked_len; ++i)
		cout << z[i] << ' ';
	cout << endl;
}