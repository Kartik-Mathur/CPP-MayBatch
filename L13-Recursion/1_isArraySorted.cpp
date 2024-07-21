#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 1 || n == 0) {
		return true;
	}

	// recursive case
	if (a[0] <= a[1]) {
		bool chotaSorted = isSorted(a + 1, n - 1);
		return chotaSorted;
	}
	else {
		return false;
	}
}

bool isSorted1(int *a, int n) {
	// base case
	if (n <= 1) return true;

	// recursive case
	if (a[n - 1] >= a[n - 2]) {
		bool chotaSorted = isSorted1(a, n - 1);
		return chotaSorted;
	}

	return false;
}

bool isSorted2(int *a, int i, int n) {
	// base case
	if (i == n || i == n - 1) {
		return true;
	}

	// recursive case
	if (a[i] <= a[i + 1]) {
		bool chotaSorted = isSorted2(a, i + 1, n);
		return chotaSorted;
	}
	return false;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted2(a, 0, n)) {
		cout << "Sorted Array\n";
	}
	else {
		cout << "Not Sorted Array\n";
	}

	return 0;
}
















