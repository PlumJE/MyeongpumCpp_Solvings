#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string infos[100][2];
	static int pointer;
public:
	static void put(string tag, string info) {
		if (pointer < 100) {
			infos[pointer][0] = tag;
			infos[pointer][1] = info;
			++pointer;
		}
		else {
			cout << "디버깅 정보 버퍼가 다 찼어요!!" << endl;
		}
	}
	static void print(string tag = "") {
		cout << "----- ";
		if (tag == "")
			cout << "모든 ";
		else
			cout << tag << "태그의 ";
		cout << "Trace 정보를 출력합니다. -----" << endl;

		for (int i = 0; i < pointer; ++i)
			if (tag == "" || infos[i][0] == tag)
				cout << infos[i][0] << ":" << infos[i][1] << endl;
	}
};
string Trace::infos[100][2];
int Trace::pointer = 0;

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

void num8() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}