#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 4, 4, 5, 4, 3, 2};
	int n = sizeof(a) / sizeof(int);
	int key = 40, i;
	bool keyFound = false;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key found: " << i << endl;
			keyFound = true;
			// break;
		}
	}

	if (keyFound == false) {
		cout << "Key Not found\n";
	}

	return 0;
}
















