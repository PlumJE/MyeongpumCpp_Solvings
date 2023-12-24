#include <iostream>
using namespace std;

/*int add(int arr[], int len) {
	int result = 0;
	for (int i = 0; i < len; ++i)
		result += arr[i];
	return result;
}

int add(int arr1[], int len, int arr2[]) {
	int result = 0;
	for (int i = 0; i < len; ++i)
		result += (arr1[i] + arr2[i]);
	return result;
}*/

int add(int arr1[], int len, int arr2[] = NULL) {
	int result = 0;
	if (arr2 == NULL) {
		arr2 = new int[len] { 0 };
	}
	for (int i = 0; i < len; ++i)
		result += (arr1[i] + arr2[i]);
	return result;
}

void num1() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}