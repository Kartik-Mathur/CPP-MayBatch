#include <iostream>
using namespace std;

// int rangeSum(int *a, int l, int r) {
// 	int sum = 0;
// 	for (int i = l; i <= r; ++i) sum += a[i];
// 	return sum;
// }

int solve(int *a, int l, int r, int *ps) {
	// base case
	if (l >= r) return 0;

	// recursive case
	int index = -1;
	for (int i = l; i <= r; ++i)
	{
		int sumLeft = ps[i] - (l ? ps[l - 1] : 0) ; // rangeSum(a, l, i);
		int sumRight = ps[r] - ps[i + 1 - 1]; //rangeSum(a, i + 1, r);
		if (sumLeft == sumRight) {
			index = i;
			break;
		}
	}

	if (index == -1) return 0;
	return 1 + max(solve(a, l, index, ps), solve(a, index + 1, r, ps));
}

int main() {

	int t, n;
	cin >> t;
	while (t--) {

		cin >> n;
		int *a = new int[n];
		int *ps = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if (i == 0) ps[i] = a[i];
			else ps[i] = ps[i - 1] + a[i];

		}
		cout << solve(a, 0, n - 1, ps) << endl;
		delete []a;
		delete []ps;
	}


	return 0;
}
















