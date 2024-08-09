#include <iostream>
using namespace std;

int stairCase(int n) {
	// base case
	if (n == 0) return 1;
	if (n < 0) return 0;

	// recursive case
	return stairCase(n - 1) + stairCase(n - 2) + stairCase(n - 3);
}

int stairCase1(int n, int k) {
	// base case
	if (n == 0) return 1;
	if (n < 0) return 0;

	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += stairCase1(n - i, k);
	}
	return ans;
}


int main() {

	int n;
	cin >> n;
	cout << stairCase(n) << endl;
	cout << stairCase1(n, 3) << endl;

	return 0;
}
















