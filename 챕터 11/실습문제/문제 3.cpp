#include <iostream>
#include <string>
#include <limits>
using namespace std;

void num3() {
	char wanna_exit;
	string output;

	cout << "'�����;�ѱ۹���'�������� �Է��ϼ���. �����Ϸ��� 'Z'�� �Է��ϼ���." << endl;
	while (true) {
		wanna_exit = cin.get();
		if (wanna_exit == 'Z')
			break;

		cin.ignore(numeric_limits<streamsize>::max(), ';');
		getline(cin, output);
		cout << output << endl;
	}

	cin.ignore();
}