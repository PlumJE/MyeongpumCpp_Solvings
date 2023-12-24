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

	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	int year;
	string name;
	string author;
	while (true) {
		cout << "년도>>";
		cin >> year;
		if (year == -1)
			break;
		cin.ignore();

		cout << "책이름>>";
		getline(cin, name);
		cout << "저자>>";
		getline(cin, author);
		v.push_back(Book(year, name, author));
	}

	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin >> author;
	for (auto iter = v.begin(); iter < v.end(); iter++)
		if (iter->getAuthor() == author)
			iter->show();

	string year_str;
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year_str;
	if (year_str.find_first_not_of("0123456789") == string::npos)
		year = stoi(year_str);
	else
		year = 2000;
	for (auto iter = v.begin(); iter < v.end(); iter++)
		if (iter->getYear() == year)
			iter->show();
}