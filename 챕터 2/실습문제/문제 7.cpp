#include <iostream>
#include <string>
using namespace std;

void num7() {
	string input = "";
	while (input != "yes") {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin >> input;
	}
	cout << "종료합니다..." << endl;
}