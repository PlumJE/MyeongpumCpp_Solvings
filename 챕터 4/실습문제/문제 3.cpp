#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void num3() {
	string text;
	int start, end;
	int count;

	cout << "���ڿ� �Է�>>";
	getline(cin, text, '\n');

	for (int i = 0; i < 2; ++i) {
		count = 0;
		if (i == 0) {
			cout << "at()�޼��峪 []�����ڷ� ���ϱ� : ";
			start = time(NULL);
			for (int i = 0; i < text.length(); ++i)
				if (text[i] == 'a')
					++count;
			end = time(NULL);
		}
		else if (i == 1) {
			cout << "find()�޼���� ���ϱ� : ";
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

		cout << "���� a�� " << count << "�� �ֽ��ϴ�.(�ɸ� �ð� : " << (end - start) << "��)" << endl;
	}
}