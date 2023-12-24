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
			cout << "����� ���� ���۰� �� á���!!" << endl;
		}
	}
	static void print(string tag = "") {
		cout << "----- ";
		if (tag == "")
			cout << "��� ";
		else
			cout << tag << "�±��� ";
		cout << "Trace ������ ����մϴ�. -----" << endl;

		for (int i = 0; i < pointer; ++i)
			if (tag == "" || infos[i][0] == tag)
				cout << infos[i][0] << ":" << infos[i][1] << endl;
	}
};
string Trace::infos[100][2];
int Trace::pointer = 0;

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է¹޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

void num8() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}