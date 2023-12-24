#include <iostream>
#include <string>
using namespace std;

class Seat {
	string reservator = "";
public:
	bool setReservator(string reservator) {
		if (this->reservator == "") {
			this->reservator = reservator;
			return true;
		}
		else
			return false;
	}
	bool unsetReservator(string reservator) {
		if (this->reservator == reservator) {
			this->reservator = "";
			return true;
		}
		else
			return false;
	}
	string getReservator() {
		return reservator;
	}
};

class Schedule {
	Seat* seats;
public:
	Schedule() {
		seats = new Seat[8];
	}
	bool booking(int seatNum, string reservator) {
		return seats[seatNum].setReservator(reservator);
	}
	bool cancel(int seatNum, string reservator) {
		return seats[seatNum].unsetReservator(reservator);
	}
	void show() {
		string reservator;
		for (int i = 0; i < 8; ++i) {
			reservator = seats[i].getReservator();
			if (reservator == "")
				cout << "\t---";
			else
				cout << '\t' << reservator;
		}
		cout << endl;
	}
};

class Console {
public:
	static int menu() {
		int choose;
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> choose;
		return choose;
	}
	static int getTime() {
		int time;
		cout << "07시:1, 12시:2, 17시:3>> ";
		cin >> time;
		return time;
	}
	static void putTime(int time) {
		switch (time) {
		case 0:
			cout << "07시:";
			break;
		case 1:
			cout << "12시:";
			break;
		case 2:
			cout << "17시:";
			break;
		}
	}
	static int getSeatNum() {
		int seatNum;
		cout << "좌석 번호>> ";
		cin >> seatNum;
		return seatNum;
	}
	static string getName() {
		string name;
		cout << "이름 입력>> ";
		cin >> name;
		return name;
	}
};

class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook() {
		schedule = new Schedule[3];
		cout << "***** 한성항공에 오신 것을 환영합니다 *****" << endl;
	}
	bool booking(int time, int seatNum, string reservator) {
		return schedule[time].booking(seatNum, reservator);
	}
	bool cancel(int time, int seatNum, string reservator) {
		return schedule[time].cancel(seatNum, reservator);
	}
	void show(int time) {
		Console::putTime(time);
		schedule[time].show();
	}
	void run() {
		int choose = 0;
		int time;
		int seatNum;
		string name;

		while (choose != 4) {
			choose = Console::menu();
			switch (choose) {
			case 1: case 2:
				time = Console::getTime() - 1;
				show(time);
				seatNum = Console::getSeatNum() - 1;
				name = Console::getName();
				if (choose == 1)
					if (!booking(time, seatNum, name)) cout << "예약에 실패하였습니다." << endl;
				else if (choose == 2)
					if (!cancel(time, seatNum, name)) cout << "취소에 실패하였습니다." << endl;
				break;
			case 3:
				for (int i = 0; i < 3; ++i)
					show(i);
				break;
			case 4:
				cout << "예약 시스템을 종료합니다." << endl;
				break;
			default:
				cout << "잘못된 입력입니다." << endl;
				break;
			}
		}
	}
};

void num9() {
	AirlineBook* ab = new AirlineBook;
	ab->run();
}