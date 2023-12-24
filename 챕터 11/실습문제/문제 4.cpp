#include <iostream>
#include <string>
#include <limits>
using namespace std;

void num4() {
	char output;

	cout << "'영어문장;한글문자'형식으로 입력하세요. 종료하려면 'Z'를 입력하세요." << endl;
	while (true) {
		if ((output = cin.get()) == 'Z') {
			break;
		}
		else {
			do
				cout << output;
			while ((output = cin.get()) != ';');
			cout << endl;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cin.ignore();
}