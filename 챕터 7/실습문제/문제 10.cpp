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
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; ++i) cin >> x[i];

	for (int i = 0; i < 5; ++i) stat << x[i];	// x[i]값을 통계 객체에 삽입한다.
	stat << 100 << 200;	// 100, 200을 통계 객체에 삽입한다.
	~stat;	// 통계 데이터를 모두 출력한다.

	int avg;
	stat >> avg;	// 통계 객체로부터 평균을 받는다.
	cout << "avg=" << avg << endl;	// 평균을 출력한다
}