#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int value;
public:
	Integer(int value) {
		this->value = value;
	}
	Integer(string value) {
		this->value = stoi(value);
	}
	void set(int value) {
		this->value = value;
	}
	int get() {
		return value;
	}
	int isEven() {
		if (value % 2 == 0)
			return 1;
		else
			return 0;
	}
};

void num8() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}