#include <iostream>
using namespace std;

bool check7(int *a, int n) {
	// base case
	if (n == 0) {
		return false;
	}

	// recursive case
	if (a[0] == 7) {
		return true;
	}
	bool chotaAns = check7(a + 1, n - 1);
	return chotaAns;
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 7};
	int n = sizeof(a) / sizeof(int);

	cout << check7(a, n) << endl;

	return 0;
}
















