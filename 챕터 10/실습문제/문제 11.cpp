#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	int year;
	string name;
	string author;
public:
	Book(int year = 0, string name = "no title", string author = "Idk") {
		this->year = year;
		this->name = name;
		this->author = author;
	}
	int getYear() {
		return year;
	}
	string getName() {
		return name;
	}
	string getAuthor() {
		return author;
	}
	void show() {
		cout << year << ", " << name << ", " << author << endl;
	}
};

void num11() {
	vector<Book> v;

	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	int year;
	string name;
	string author;
	while (true) {
		cout << "�⵵>>";
		cin >> year;
		if (year == -1)
			break;
		cin.ignore();

		cout << "å�̸�>>";
		getline(cin, name);
		cout << "����>>";
		getline(cin, author);
		v.push_back(Book(year, name, author));
	}

	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	cin >> author;
	for (auto iter = v.begin(); iter < v.end(); iter++)
		if (iter->getAuthor() == author)
			iter->show();

	string year_str;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> year_str;
	if (year_str.find_first_not_of("0123456789") == string::npos)
		year = stoi(year_str);
	else
		year = 2000;
	for (auto iter = v.begin(); iter < v.end(); iter++)
		if (iter->getYear() == year)
			iter->show();
}