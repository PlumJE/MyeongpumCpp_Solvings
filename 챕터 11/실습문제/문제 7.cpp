#include <iostream>
#include <cctype>
using namespace std;

void num7() {
	for (int i = 0; i < 4; ++i)
		cout << "dec\thexa\tchar\t";
	cout << endl;

	for (int i = 0; i < 4; ++i)
		cout << "---\t----\t----\t";
	cout << endl;

	char ch;
	for (ch = 0; ; ++ch) {
		printf("%d\t%x\t", ch, ch);
		if (isprint(ch))
			printf("%c\t", ch);
		else
			printf(".\t");
		if (ch % 4 == 3)
			cout << endl;
		if (ch == 127)
			break;
	}
}