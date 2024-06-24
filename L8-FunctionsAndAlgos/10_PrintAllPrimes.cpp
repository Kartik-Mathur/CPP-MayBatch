#include <iostream>
using namespace std;

bool checkPrime(int n) {

	for (int i = 2; i <= n - 1; ++i)
	{
		// if n divide ho gaya toh return krdo false, function end ho jaega
		if (n % i == 0) return false;
	}
	// Agar i ==n ho gaya and loop se bahar aa gaye hum,
	// toh number prime hoga
	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (checkPrime(i)) cout << i << " ";
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;

	printAllPrimes(n);

	return 0;
}
















