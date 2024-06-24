#include <iostream>
using namespace std;

int fact(int n) {
	int ans = 1;

	for (int i = 2; i <= n; ++i) {
		ans *= i;
	}

	return ans;
}

int nCr(int n, int r) {
	int fr = fact(r);
	int fn = fact(n);
	int fnr = fact(n - r);

	return fn / (fr * fnr);
}


int main() {

	int n, r;
	cin >> n >> r;
	cout << nCr(n, r) << endl;
	return 0;
}
















