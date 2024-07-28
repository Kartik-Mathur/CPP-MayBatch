#include <iostream>
using namespace std;

int stringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		// Agar array mei elements hi nahi hai, toh uski integer value 0 hi hogi
		return 0;
	}

	// recursive case
	int last_digit = a[n - 1] - '0';
	int value = stringToInt(a, n - 1);
	return value * 10 + last_digit;
}

int main() {

	char a[] = "1234";

	int x = stringToInt(a, strlen(a));
	cout << x << endl;
	cout << x + 10 << endl;
	cout << x * 5 + 10 << endl;


	return 0;
}
















