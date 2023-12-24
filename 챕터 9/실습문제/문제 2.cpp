#include "Converter.h"

class KmToMile : public Converter {
protected:
	double convert(double src) {
		return src / ratio;
	}
	string getSourceString() {
		return "Km";
	}
	string getDestString() {
		return "Mile";
	}
public:
	KmToMile(double ratio) : Converter(ratio) {}
};

void num2() {
	KmToMile toMile(1.609344);
	toMile.run();
}