#include <iostream>
using namespace std;

int main() {
	int a[5];
	// a[i] = i+1
	// a[0] = 1;
	// a[1] = 2;
	// a[2] = 3;
	// a[3] = 4;
	// a[4] = 5;
	for (int i = 0; i < 5; ++i)
	{
		a[i] = i + 1;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















