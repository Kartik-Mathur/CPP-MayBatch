#include <iostream>
using namespace std;

int first7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}
	return first7(a, n, i + 1);
}

int first_7(int *a, int n) {
	if (n == 0) {
		return -1;
	}

	// recursive case
	if (a[0] == 7) {
		return 0;
	}
	int indx = first_7(a + 1, n - 1);
	if (indx == -1) {
		return -1;
	}

	return indx + 1;
}

int main() {

	int a[] = {1, 2, 7, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << first_7(a, n) << endl;

	return 0;
}

















