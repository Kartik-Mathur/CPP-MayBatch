// Question Link: https://hack.codingblocks.com/app/contests/6136/215/problem
#include <iostream>
using namespace std;

int main() {
	long long a, b, product;

	cin >> a >> b;
	long long x = min(a, b);
	long long hcf;

	long long i = 1;
	while (i <= x) {

		if (a % i == 0 && b % i == 0) {
			hcf = i;
		}

		i = i + 1;
	}

	product = a * b;
	long long lcm = product / hcf;
	cout << lcm << endl;



	return 0;
}
















