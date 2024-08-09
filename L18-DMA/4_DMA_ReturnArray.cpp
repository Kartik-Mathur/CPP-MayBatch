#include <iostream>
using namespace std;

int *createArray(int n) {
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = (i + 1) * 10;
	}
	return arr;
}

int main() {

	int n;
	cin >> n;

	int *a = createArray(n);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// DELETING AN ARRAY
	delete []a; // a jis array ko point kar raha hai heap mei usse free kardo
	a = NULL;


	return 0;
}
















