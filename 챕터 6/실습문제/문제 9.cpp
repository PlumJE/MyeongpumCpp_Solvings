#include <iostream>
using namespace std;

class Board {
	static string contents[1000];
	static int add_ptr;
public:
	static void add(string content) {
		contents[add_ptr++] = content;
	}
	static void print() {
		cout << "************* �Խ����Դϴ�. *************" << endl;
		for (int i = 0; i < add_ptr; ++i)
			cout << i << " : " << contents[i] << endl;
		cout << endl;
	}
};
string Board::contents[1000];
int Board::add_ptr = 0;

void num9() {
	Board::add("�߰����� ���� ���� ���������Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}