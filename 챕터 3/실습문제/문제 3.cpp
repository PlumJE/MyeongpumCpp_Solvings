#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id, balance;
public:
	Account(string name, int id, int balance) {
		this->name = name;
		this->id = id;
		this->balance = balance;
	}
	string getOwner() {
		return name;
	}
	void deposit(int amount) {
		balance += amount;
	}
	int withdraw(int amount) {
		if (balance >= amount) {
			balance -= amount;
			return amount;
		}
		else {
			cout << "�ܾ� ����!!" << endl;
			return 0;
		}
	}
	int inquiry() {
		return balance;
	}
};

void num3() {
	Account a("kitae", 1, 5000);	// id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000);				// 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}