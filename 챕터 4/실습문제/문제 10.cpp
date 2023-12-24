#include <iostream>
#include "Person.h"
using namespace std;

class Family {
	string name;
	Person* p;
	int size;
public:
	Family(string name, int size) {
		this->name = name;
		this->p = new Person[size];
		this->size = size;
	}
	void setName(int n, string name) {
		p[n].set(name, "010-0000-0000");
	}
	void show() {
		cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0; i < size; ++i) {
			cout << p[i].getName() << "\t";
		}
		cout << endl;
	}
	~Family() {
		delete [] p;
	};
};

void num10() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}