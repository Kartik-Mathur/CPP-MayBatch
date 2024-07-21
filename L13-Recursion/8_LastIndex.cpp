#include <iostream>
using namespace std;

int lastIndex(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		// agar i par 7 hai, store karlo
		int indx = i;
		// aage ke remaining array mei recursion ko bolo kya 7 hai?

		int aageIndex = lastIndex(a, n, i + 1);
		// if aage 7 nahi milla toh means, indx is our last index of 7
		if (aageIndex == -1) {
			return indx;
		}
		// agar aage se aa gaya answer, that means whi hoga last indx of 7
		return aageIndex;
	}
	// ith bucket par 7 nahi hai, toh ask recursion chote array mei
	// last index of 7 laakar dede
	return lastIndex(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 7, 7, 7, 5};
	int n = sizeof(a) / sizeof(int);

	cout << lastIndex(a, n, 0) << endl;

	return 0;
}
















