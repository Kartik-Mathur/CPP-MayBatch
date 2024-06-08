#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	int number;

	number = 2;
	while (number <= n) {

		// Check karo number prime hai toh print krna hai else nhi
		// Assume that number is prime
		bool isPrime = true;

		i = 2;
		while (i <= number - 1) {
			// Agar number kisi bhi i se divide ho gaya toh
			// assumption galat ho jaegi
			if (number % i == 0) {
				isPrime = false;
				break;
			}
			i = i + 1;
		}

		// Agar number kisi bhi i se divide nhi hua
		if (isPrime == true) {
			cout << number << " ";
		}


		number = number + 1;
	}





























	return 0;
}
















