#include <iostream>
using namespace std;

int main() {

	int n, s, number, i;
	cin >> n;

	int row = 1;
	while (row <= n) {
		// Write what to do in every row here....
		// 1. Print n-row times spaces
		s = 1;
		while (s <= n - row) {
			cout << " ";

			s = s + 1;
		}

		// 2. Print increasing numbers row times, start: row
		number = row;
		i = 1;
		while (i <= row) {
			cout << number;
			number = number + 1;
			i = i + 1;
		}


		// 3. Print decreasing numbers row-1 times, start: 2*row-2
		i = 1;
		number = 2 * row - 2;
		while (i <= row - 1) {
			cout << number;
			number = number - 1;

			i = i + 1;
		}


		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















