#include <iostream>
using namespace std;

int sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	// sum(n) = n + sum(n-1)
	int chotaAns = sum(n - 1);
	int badaAns = n + chotaAns;
	return badaAns;
}

int sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	return n + sum(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;

	return 0;
}


















