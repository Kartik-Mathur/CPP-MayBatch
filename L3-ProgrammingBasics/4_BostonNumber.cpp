#include <iostream>
using namespace std;

int main() {

	int n, i, copy_n, x;
	int sum_of_pf = 0;
	int sum_of_digits = 0;
	cin >> n;
	copy_n = n;

	// Finding the sum of prime factor digits
	i = 2;
	while (i <= n) {
		// Jab tak n is divisible by i, keep dividing it
		while (n % i == 0) {
			// cout << i << " ";
			// We need to add all the digits of i into sum_of_pf
			x = i;
			while (x != 0) {
				int ld = x % 10;
				// cout << "Adding: " << ld << endl;
				sum_of_pf = sum_of_pf + ld;

				x = x / 10;
			}

			n = n / i;
		}

		i = i + 1;
	}


	// 2. Find the sum of digits of n
	n = copy_n;
	while (n != 0) {
		int ld = n % 10;
		sum_of_digits = sum_of_digits + ld;
		n = n / 10;
	}

	// 3. if sum_of_digits == sum_of_pf
	if (sum_of_digits == sum_of_pf) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}
















