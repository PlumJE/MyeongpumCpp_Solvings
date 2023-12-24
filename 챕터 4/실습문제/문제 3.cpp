#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void num3() {
	string text;
	int start, end;
	int count;

	cout << "문자열 입력>>";
	getline(cin, text, '\n');

	for (int i = 0; i < 2; ++i) {
		count = 0;
		if (i == 0) {
			cout << "at()메서드나 []연산자로 구하기 : ";
			start = time(NULL);
			for (int i = 0; i < text.length(); ++i)
				if (text[i] == 'a')
					++count;
			end = time(NULL);
		}
		else if (i == 1) {
			cout << "find()메서드로 구하기 : ";
			start = time(NULL);
			int index = 0;
			while (1) {
				index = text.find('a', index);
				if (index == string::npos)
					break;
				++count;
				++index;
			}
			end = time(NULL);
		}

		cout << "문자 a는 " << count << "개 있습니다.(걸린 시간 : " << (end - start) << "초)" << endl;
	}
}