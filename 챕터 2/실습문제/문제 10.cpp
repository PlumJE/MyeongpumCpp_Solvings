#include <iostream>
#include <cstring>
using namespace std;

void num10() {
	char input[100];
	cout << "문자열 입력>>";
	cin >> input;

	for (int i = 0; i < strlen(input); ++i) {
		for (int j = 0; j <= i; ++j)
			cout << input[j];
		cout << endl;
	}
}