#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	// op: 5,4,3,2,1
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















