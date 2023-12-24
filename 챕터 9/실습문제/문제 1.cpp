#include "Converter.h"
using namespace std;

class WonToDollar : public Converter {
protected:
	double convert(double src) {
		return src / ratio;
	}
	string getSourceString() {
		return "��";
	}
	string getDestString() {
		return "�޷�";
	}
public:
	WonToDollar(double ratio) : Converter(ratio) {}
};

void num1() {
	WonToDollar wd(1010);
	wd.run();
}