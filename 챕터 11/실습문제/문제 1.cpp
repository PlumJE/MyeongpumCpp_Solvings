#include <iostream>
using namespace std;

void num1() {
	char ch;
	int count = 0;

	cout << "문자열을 입력>>";
	while ((ch = cin.get()) != EOF) {
		if (ch == 'a')
			++count;
		if (ch == '\n')
			break;
	}
	cout << "'a'는 " << count << "개 입니다." << endl;
}