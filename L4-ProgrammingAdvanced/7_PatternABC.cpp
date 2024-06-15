#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{
		// 1. Print increasing characters
		char ch = 'A';
		for (i = 1; i <= n - row + 1; i++) {
			cout << ch << " ";
			ch++;
		}

		ch --;
		// 2. Print decreasing characters
		for (i = 1; i <= n - row + 1; i++) {
			cout << ch << " ";
			ch--;
		}

		cout << endl;
	}


	return 0;
}
















