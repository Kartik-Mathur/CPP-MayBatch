#include <iostream>
using namespace std;

int ways(int n, int m) {
	// base case
	if (n == 0 and m == 0) return  1;

	// recursive case
	int ans = 0;
	for (int i = 0; i < n; ++i) ans += ways(i, m);
	for (int i = 0; i < m; ++i) ans += ways(n, i);
	return ans;
}

int main() {

	cout << ways(3, 3) << endl;
	return 0;
}
















