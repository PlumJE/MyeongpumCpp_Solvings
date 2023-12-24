#include <iostream>
#include <string>
using namespace std;

void combine(string src1, string src2, string& dest) {
	dest = src1 + " " + src2;
}

void num3() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3 << endl;
}