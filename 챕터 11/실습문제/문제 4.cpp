#include <iostream>
#include <string>
#include <limits>
using namespace std;

void num4() {
	char output;

	cout << "'�����;�ѱ۹���'�������� �Է��ϼ���. �����Ϸ��� 'Z'�� �Է��ϼ���." << endl;
	while (true) {
		if ((output = cin.get()) == 'Z') {
			break;
		}
		else {
			do
				cout << output;
			while ((output = cin.get()) != ';');
			cout << endl;
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cin.ignore();
}