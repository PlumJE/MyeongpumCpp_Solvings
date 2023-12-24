#include <string>
#include "LoopAdder.h"
using namespace std;

class WhileLoopAdder : public LoopAdder {
protected:
	int calculate() {
		int result = 0;
		int i = getX();
		while (i <= getY())
			result += i++;
		return result;
	}
public:
	WhileLoopAdder(string name = "") : LoopAdder(name) {}
};

class DoWhileLoopAdder : public LoopAdder {
protected:
	int calculate() {
		int result = 0;
		int i = getX();
		do {
			result += i++;
		} while (i <= getY());
		return result;
	}
public:
	DoWhileLoopAdder(string name = "") : LoopAdder(name) {}
};

void num4() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}