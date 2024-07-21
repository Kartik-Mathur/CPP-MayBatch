#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return;
	}
	// recursive case
	// ek element ko mei sahi jagah rakhunga
	for (int j = 0; j <= n - 2 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	bubbleSort(a, n, i + 1);
}


void bubbleSort1(int *a, int n, int i, int j) {
	// base case
	if (i == n - 1) {
		return;
	}
	// recursive case
	// ek element ko mei sahi jagah rakhunga
	if (j <= n - 2 - i) {
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
		bubbleSort1(a, n, i, j + 1);
	}
	else {
		bubbleSort1(a, n, i + 1, 0);
	}
}



int main() {

	int a[] = {5, 4, 3, 2, 1, 0, -1};
	int n = sizeof(a) / sizeof(int);
	bubbleSort1(a, n, 0, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout  << endl;

	return 0;
}
















