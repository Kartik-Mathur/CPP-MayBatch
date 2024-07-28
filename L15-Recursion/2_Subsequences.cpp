#include <iostream>
using namespace std;

void subsequences(char* a, char* op, int i, int j) {
	// base case
	if (a[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}
	// recursive case
	// 1. ith character ko ignore kardo
	subsequences(a, op, i + 1, j);
	// 2. ith character ko op mei aage fix kardo
	op[j] = a[i];
	subsequences(a, op, i + 1, j + 1);
}

int main() {

	char a[] = "abc";
	char op[100];
	subsequences(a, op, 0, 0);
	return 0;
}
















