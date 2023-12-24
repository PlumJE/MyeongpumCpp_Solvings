#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; ++i) mem[i] = val;
	}
	~MyVector() { delete[] mem; }
	void show() {
		for (int i = 0; i < size; ++i)
			cout << mem[i] << ' ';
		cout << endl;
	}
};

void num4() {
	MyVector v1, v2(200, 25);
	cout << "v1 : ";
	v1.show();
	cout << "v2 : ";
	v2.show();
}