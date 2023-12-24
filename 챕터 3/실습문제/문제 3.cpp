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
			cout << "잔액 부족!!" << endl;
			return 0;
		}
	}
	int inquiry() {
		return balance;
	}
};

void num3() {
	Account a("kitae", 1, 5000);	// id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	a.deposit(50000);				// 50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}