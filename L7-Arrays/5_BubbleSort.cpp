#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	// Pehle lets learn how to do the comparison 1 time
	// for (int j = 0; j < n - 1; ++j)
	// {
	// 	if (a[j] > a[j + 1]) {
	// 		int temp = a[j];
	// 		a[j] = a[j + 1];
	// 		a[j + 1] = temp;
	// 	}
	// }

	for (int i = 0; i <= n - 2; ++i)
	{
		// Yaha par shuru se ek ek karke saare pairs ko compare krna hai
		// aur bade number ko aage lekar jaana hai
		for (int j = 0; j <= n - 2; ++j)
		{
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















