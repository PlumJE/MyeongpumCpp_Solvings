#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

char exchange_alpha(char letter) {
	char result = '\0';
	char min, max;

	if (isupper(letter)) {
		min = 'A';
		max = 'Z';
	}
	else {
		min = 'a';
		max = 'z';
	}

	while (result < min || result == letter || max < result) {
		result = rand();
	}
	return result;
}

void num5() {
	string text;
	int n;
	int hasalpha;
	srand((unsigned)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, text, '\n');

		if (text == "exit")
			break;

		hasalpha = 0;
		for (n = 0; n < text.length(); ++n) {
			if (isalpha(text[n])) {
				hasalpha = 1;
				break;
			}
		}
		do {
			n = (rand() % text.length());
		} while (!isalpha(text[n]));

		text[n] = exchange_alpha(text[n]);
		cout << text << endl;
	}
}