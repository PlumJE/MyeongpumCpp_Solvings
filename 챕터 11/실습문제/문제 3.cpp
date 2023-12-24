#include <iostream>
#include <string>
#include <limits>
using namespace std;

void num3() {
	char wanna_exit;
	string output;

	cout << "'영어문장;한글문자'형식으로 입력하세요. 종료하려면 'Z'를 입력하세요." << endl;
	while (true) {
		wanna_exit = cin.get();
		if (wanna_exit == 'Z')
			break;

		cin.ignore(numeric_limits<streamsize>::max(), ';');
		getline(cin, output);
		cout << output << endl;
	}

	cin.ignore();
}