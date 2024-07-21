#include <iostream>
using namespace std;

void stairCase(int a[][4], int n, int m, int key) {
	int i = 0, j = m - 1;
	bool isKeyFound = false;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key found at " << i << ", " << j << endl;
			return;
		}
		else if (key > a[i][j]) {
			i++;
		}
		else j--;
	}
	cout << "Key Not found\n";
}

void stairCase1(int a[][4], int n, int m, int key) {
	int i = 0, j = m - 1;
	bool isKeyFound = false;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Key found at " << i << ", " << j << endl;
			isKeyFound = true;
			break;
		}
		else if (key > a[i][j]) {
			i++;
		}
		else j--;
	}
	if (isKeyFound == false) {
		cout << "Key Not found\n";
	}
}
int main() {

	int a[][4] = {
		{0, 1, 3, 4},
		{2, 4, 5, 10},
		{6, 7, 9, 12},
		{8, 11, 15, 19}
	};
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(a[0]) / sizeof(int);

	stairCase(a, n, m, 11);


	return 0;
}
















