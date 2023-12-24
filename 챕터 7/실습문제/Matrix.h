#pragma once
#include <iostream>
using namespace std;

class Matrix {
	int data[4];
public:
	Matrix() {
		Matrix(0, 0, 0, 0);
	}
	Matrix(int e1, int e2, int e3, int e4) {
		this->data[0] = e1;
		this->data[1] = e2;
		this->data[2] = e3;
		this->data[3] = e4;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; ++i)
			cout << data[i] << ' ';
		cout << '}' << endl;
	}

	friend Matrix operator+ (Matrix sbj, Matrix obj);
	friend Matrix& operator+=(Matrix sbj, Matrix obj);
	friend bool operator==(Matrix sbj, Matrix obj);
	friend Matrix& operator<< (Matrix& dest, int src[]);
	friend Matrix& operator>> (Matrix& src, int* dest);
};