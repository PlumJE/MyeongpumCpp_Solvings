#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	Book& operator+= (int incr);
	Book& operator-= (int decr);
	friend bool operator== (Book sbj, int price);
	friend bool operator== (Book sbj, string title);
	friend bool operator== (Book sbj, Book obj);
	friend bool operator! (Book sbj);
	friend bool operator< (Book sbj, Book obj);
};