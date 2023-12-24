#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+ (SortedArray& op2);
	SortedArray& operator= (const SortedArray& op2);
	void show();
};
SortedArray::SortedArray() {
	p = NULL;
	size = 0;
}
SortedArray::SortedArray(SortedArray& src) {
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; ++i)
		this->p[i] = src.p[i];
}
SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; ++i)
		this->p[i] = p[i];
}
SortedArray::~SortedArray() {
	delete[] p;
}
void SortedArray::sort() {
	int temp;
	for (int i = 0; i < size - 2; i++) {
		for (int j = i + 1; j < size - 1; j++) {
			if (p[i] > p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}
void SortedArray::show() {
	sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; ++i)
		cout << p[i] << ' ';
	cout << endl;
}
SortedArray SortedArray::operator+ (SortedArray& op2) {
	int* p = new int[size + op2.size];
	for (int i = 0; i < size; ++i)
		p[i] = this->p[i];
	for (int i = 0; i < op2.size; ++i)
		p[size + i] = op2.p[i];
	SortedArray result(p, size + op2.size);
	return result;
}
SortedArray& SortedArray::operator= (const SortedArray& op2) {
	delete[] this->p;
	this->size = op2.size;
	this->p = new int[size];
	for (int i = 0; i < size; ++i)
		this->p[i] = op2.p[i];
	return *this;
}

void num12() {
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}