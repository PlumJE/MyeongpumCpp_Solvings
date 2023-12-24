#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		set(title, price);
	}
	Book(Book& b) {
		set(b.title, b.price);
	}
	~Book() {
		delete title;
	}
	void set(const char* title, int price) {
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	void show() {
		cout << title << ' ' << price << "원" << endl;
	}
};

void num11() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}