#include <iostream>
#include <vector>
using namespace std;

void num9() {
	vector<int> v;
	int num;
	double sum;
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;

		if (num == 0)
			break;

		v.push_back(num);
		sum = 0.0;
		for (int i = 0; i < v.size(); ++i) {
			cout << v[i] << ' ';
			sum += v[i];
		}
		cout << endl << "평균 = " << sum / v.size() << endl;
	}
}