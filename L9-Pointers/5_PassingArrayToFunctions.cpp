#include <iostream>
using namespace std;

void print(int *x, int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << x[i] << " ";
		cout << *(x + i) << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);

	print(a, n);

	return 0;
}
















