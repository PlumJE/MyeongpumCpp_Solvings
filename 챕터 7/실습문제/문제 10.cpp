#include <iostream>
using namespace std;

class Statistics {
	int* datas;
	int num;
public:
	Statistics() {
		datas = new int[1000];
		num = 0;
	}
	bool operator! () {
		if (num == 0)
			return true;
		else
			return false;
	}
	Statistics& operator<< (int data) {
		datas[num++] = data;
		return *this;
	}
	Statistics& operator>> (int& average) {
		int sum = 0;
		for (int i = 0; i < num; ++i)
			sum += datas[i];
		average = sum / num;
		return *this;
	}
	void operator~ () {
		for (int i = 0; i < num; ++i)
			cout << datas[i] << ' ';
		cout << endl;
	}
};

void num10() {
	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; ++i) cin >> x[i];

	for (int i = 0; i < 5; ++i) stat << x[i];	// x[i]���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200;	// 100, 200�� ��� ��ü�� �����Ѵ�.
	~stat;	// ��� �����͸� ��� ����Ѵ�.

	int avg;
	stat >> avg;	// ��� ��ü�κ��� ����� �޴´�.
	cout << "avg=" << avg << endl;	// ����� ����Ѵ�
}