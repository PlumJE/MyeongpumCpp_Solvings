#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string time) {
		char tiempo[100];
		strcpy(tiempo, time.c_str());

		this->year = atoi(strtok(tiempo, "/"));
		this->month = atoi(strtok(NULL, "/"));
		this->day = atoi(strtok(NULL, "/"));
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	void show() {
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
};

void num2() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independanceDay("1945/8/15"); // 1945�� 8�� 15��
	independanceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}