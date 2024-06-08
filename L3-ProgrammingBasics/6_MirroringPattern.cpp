#include <iostream>
using namespace std;

int main() {

	int n, pT, cT, r;
	cin >> n;

	int row = 0;
	while (row <= n - 1) {

		cout << 1 << " ";
		pT = 1;
		r = 1;
		while (r <= row) {
			cT = pT * (row - r + 1) / r;
			cout << cT << " ";
			pT = cT;

			r = r + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	row = n - 2;
	while (row >= 0) {

		cout << 1 << " ";
		pT = 1;
		r = 1;
		while (r <= row) {
			cT = pT * (row - r + 1) / r;
			cout << cT << " ";
			pT = cT;

			r = r + 1;
		}

		cout << '\n';
		row = row - 1;
	}

	return 0;
}
















