#include <iostream>
using namespace std;

istream& pos(istream& ins) {
	cout << "��ġ��? ";
	return ins;
}

void num11() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}