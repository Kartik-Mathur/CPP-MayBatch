#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);


	for (int i = 0; i <= n - 2; ++i)
	{
		bool swappingHoRahiHai = false;
		for (int j = 0; j <= n - 2 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swappingHoRahiHai = true;
			}
		}

		// Agar swapping nahi hui, that means array is already sorted
		if (swappingHoRahiHai == false) {
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















