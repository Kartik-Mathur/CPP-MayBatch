#include <iostream>
using namespace std;

int main() {

	int n, counter = 0;
	char a[10000];
	cin >> a;
	n = strlen(a);

	for (int i = 0; i <= ((1 << n) - 1); ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i & (1 << j)) {
				cout << a[j];
			}
		}

		cout << endl;
	}

	return 0;
}
















