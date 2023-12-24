#include <iostream>
using namespace std;

char& find(char a[], char c, bool& sucsess) {
	for (int i = 0; i < 100; ++i) {
		if (a[i] == c) {
			sucsess = true;
			return a[i];
		}
		sucsess = false;
	}
}

void num6() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return;
	}
	loc = 'm';
	cout << s << endl;
}