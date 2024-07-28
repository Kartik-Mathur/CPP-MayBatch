#include <iostream>
using namespace std;

int binarySearch(int *a, int s, int e, int key) {
	if (s > e) {
		return -1;
	}

	// recursive case
	// mid index find karo
	int mid = (s + e) / 2;
	// agar a[mid] key ke barabar ho gaya toh key mill gai, kaam done
	if (a[mid] == key) {
		return mid;
	}
	else if (key > a[mid]) { // key agar badi hai mid se, toh right side[mid+1,e] wale
		// array mei find krne ko kahenge recursion ko, because chote array
		// ka kaam recursion krega
		int indx = binarySearch(a, mid + 1, e, key);
		return indx;
	}
	else {
		// Yaha key choti hogi, that means left side [s,mid-1] mei recursion find krega
		return binarySearch(a, s, mid - 1, key);
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << binarySearch(a, 0, n - 1, 0) << endl;

	return 0;
}
















