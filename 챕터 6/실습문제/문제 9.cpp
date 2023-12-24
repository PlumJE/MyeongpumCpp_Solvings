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
		cout << "************* 게시판입니다. *************" << endl;
		for (int i = 0; i < add_ptr; ++i)
			cout << i << " : " << contents[i] << endl;
		cout << endl;
	}
};
string Board::contents[1000];
int Board::add_ptr = 0;

void num9() {
	Board::add("중간고사는 감독 없는 자율시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}