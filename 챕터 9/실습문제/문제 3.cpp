#include <string>
#include "LoopAdder.h"
using namespace std;

class ForLoopAdder : public LoopAdder {
protected:
	int calculate() {
		int result = 0;
		for (int i = getX(); i <= getY(); ++i)
			result += i;
		return result;
	}
public:
	ForLoopAdder(string name = "") : LoopAdder(name) {}
};

void num3() {
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}