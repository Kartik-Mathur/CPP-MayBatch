#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void mergeSortedArrays(int a[], int m,
                       int b[], int n) {
	int i = m - 1, j = n - 1,
	    k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (b[j] > a[i]) {
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k--] = a[i--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

int main() {

	int a[5] = {3, 5};
	int m = 2;

	int b[3] = {1, 2, 6};
	int n = sizeof(b) / sizeof(int);

	mergeSortedArrays(a, m, b, n);
	printArray(a, m + n);


	return 0;
}
















