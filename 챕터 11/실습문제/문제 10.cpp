#include <iostream>
#include <string>
using namespace std;

istream& prompt(istream& ins) {
	cout << "¾ÏÈ£?";
	return ins;
}

void num10() {
	string password;
	while (true) {
		cin >> prompt >> password;
		if (password == "C++") {
			cout << "login sucsess!!" << endl;
			break;
		}
		else
			cout << "login fall. try again!!" << endl;
	}
}