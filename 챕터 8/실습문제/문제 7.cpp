#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void memInput(int index, char val) {
		mem[index] = val;
	}
	char memOutput(int index) {
		return mem[index];
	}
};

class ROM : public BaseMemory {
public:
	ROM(int size, char init[], int init_len) : BaseMemory(size) {
		for (int i = 0; i < init_len; ++i)
			memInput(init[i], i);
	}
	char read(int index) {
		return memOutput(index);
	}
};

class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {}
	char read(int index) {
		return memOutput(index);
	}
	void write(int index, char val) {
		memInput(index, val);
	}
};

void num7() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; ++i) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; ++i) cout << mainMemory.read(i);
}