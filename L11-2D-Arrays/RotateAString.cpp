#include <iostream>
using namespace std;

void rotateString(char *a, int n) {
	int len = strlen(a), i, j;
	n = n % len;

	// Shift all characters n times ahead
	for (i = len - 1; i >= 0 ; i--) {
		a[i + n] = a[i];
	}

	// Bring n characters from end to front
	for (i = len, j = 0 ; j < n ; i++, j++) {
		a[j] = a[i];
	}

	// Add character '\0' at len position
	a[len] = '\0';
}

int main() {

	char a[1000] = "Coding";
	int n;
	cin >> n;

	rotateString(a, n);

	cout << a << endl;



	return 0;
}
















