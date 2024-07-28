#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cin >> n;

	int place = 1;
	int val, inverse = 0;

	while (n != 0) {
		val = n % 10;
		inverse += place * pow(10, val - 1);
		n /= 10;
		place++;
	}

	cout << inverse << endl;

	return 0;
}

















