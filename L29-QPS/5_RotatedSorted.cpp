#include <iostream>
using namespace std;

int  findPivot(int *a, int n) {
	int s = 0, e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (mid > 0 and a[mid] < a[mid - 1]) {
			return mid;
		}
		else if (mid < n - 1 and a[mid] > a[mid + 1]) {
			return mid + 1;
		}


	}
}

int main() {

	int a[] = {4, 5, 6, 7, 0, 1, 2};
	int n = sizeof(a) / sizeof(int);



	return 0;
}
















