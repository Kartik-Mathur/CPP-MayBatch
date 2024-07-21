#include <iostream>
using namespace std;

void printDecreasing(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	cout << n << " ";
	printDecreasing(n - 1);
}

void printIncreasing(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	printIncreasing(n - 1);
	cout << n << " ";
}


void printIncreasingNormal(int n, int i) {
	// base case
	if (i == n + 1) {
		return;
	}
	// recursive case
	cout << i << " ";
	printIncreasingNormal(n, i + 1);

}

int main() {

	int n = 5;

	// printDecreasing(n);
	// cout << endl;
	printIncreasing(n);

	return 0;
}
















