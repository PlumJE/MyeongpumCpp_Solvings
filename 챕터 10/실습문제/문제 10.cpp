#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Nation {
	string nation = "";
	string capital = "";
};

class Quiz {
	vector<Nation> v;
public:
	Quiz() {
		cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
		v.push_back({ "���ѹα�", "����" });
		v.push_back({ "�Ϻ�", "����" });
		v.push_back({ "��ȭ�α�", "����" });
		v.push_back({ "����", "�ϸ���" });
		v.push_back({ "����", "�����Ÿ��" });
		v.push_back({ "��������ź", "����ġ" });
		v.push_back({ "Ƽ��Ʈ", "���" });
		srand(time(NULL));
	}
	void run() {
		int choose;
		while (true) {
			cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
			cin >> choose;
			switch (choose) {
			case 1:
				input();
				break;
			case 2:
				quiz();
				break;
			case 3:
				return;
			default:
				cout << "�߸��� �Է��Դϴ�." << endl;
				break;
			}
		}
	}
	void input() {
		cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
		int index = v.size();
		string nation, capital;
		while (true) {
			reset:
			cout << ++index << ">>";
			cin >> nation >> capital;

			if (nation == "no" && capital == "no")
				return;

			for (auto iter = v.begin(); iter < v.end(); iter++) {
				if (iter->nation == nation && iter->capital == capital) {
					cout << "already exits !!" << endl;
					goto reset;
				}
			}
			v.push_back({ nation, capital });
		}
	}
	void quiz() {
		int index;
		string answer;
		while (true) {
			index = rand() % v.size();
			cout << v[index].nation << "�� ������?";
			cin >> answer;

			if (answer == "exit")
				return;

			if (answer == v[index].capital)
				cout << "Correct !!" << endl;
			else
				cout << "NO !!" << endl;
		}
	}
};

void num10() {
	Quiz q;
	q.run();
}