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



int main() {

	int a[] = {1, 2, 13, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted(a, n)) {
		cout << "Sorted Array\n";
	}
	else {
		cout << "Not Sorted Array\n";
	}

	return 0;
}
















