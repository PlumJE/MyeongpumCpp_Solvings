#include <iostream>
#include "Box.h"
using namespace std;

void num11() {
	Box b(10, 2);
	b.draw(); // �ڽ��� �׸���.
	cout << endl;
	b.setSize(7, 4); // �ڽ��� ũ�⸦ �����Ѵ�.
	b.setFill('^'); // �ڽ��� ���θ� ä�� ���ڸ� '^'�� �����Ѵ�.
	b.draw(); // �ڽ��� �׸���.
}