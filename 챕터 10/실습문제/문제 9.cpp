#include <iostream>
#include <vector>
using namespace std;

void num9() {
	vector<int> v;
	int num;
	double sum;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> num;

		if (num == 0)
			break;

		v.push_back(num);
		sum = 0.0;
		for (int i = 0; i < v.size(); ++i) {
			cout << v[i] << ' ';
			sum += v[i];
		}
		cout << endl << "��� = " << sum / v.size() << endl;
	}
}