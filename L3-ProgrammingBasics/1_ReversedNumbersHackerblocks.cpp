// QuestionLink: https://hack.codingblocks.com/app/contests/6136/1566/problem
#include <iostream>
using namespace std;

int main() {

	unsigned long long int x, y, sum, temp, ld;
	int t;

	cin >> t;
	int i = 1;
	while (i <= t) {
		cin >> x >> y;

		// 1. Reverse Number x
		temp = 0;
		while (x != 0) {
			ld = x % 10;
			temp = temp * 10 + ld;
			x = x / 10;
		}
		x = temp;
		// 2. Reverse Number y
		temp = 0;
		while (y != 0) {
			ld = y % 10;
			temp = temp * 10 + ld;
			y = y / 10;
		}
		y = temp;
		// 3. Find Sum of reversed numbers
		sum = x + y;
		// 4. Reverse the sum
		temp = 0;
		while (sum != 0) {
			ld = sum % 10;
			temp = temp * 10 + ld;
			sum = sum / 10;
		}
		sum = temp;
		// 5. Print the sum
		cout << sum << endl;
		i = i + 1;
	}



	return 0;
}
















