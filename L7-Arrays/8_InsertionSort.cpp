#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int), i, j;

	for (i = 1; i < n; ++i)
	{
		int hpc = a[i];
		for (j = i - 1; j >= 0 and hpc < a[j]; --j)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = hpc;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















