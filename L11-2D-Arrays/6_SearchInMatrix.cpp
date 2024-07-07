#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 55},
		{7, 8, 9, 555},
		{17, 18, 19, 5555},
	}, key = 116;
	int i, j;
	int rows = sizeof(a) / sizeof(a[0]);
	int cols = sizeof(a[0]) / sizeof(int);
	bool keyFound = false;

	for (i = 0; i < rows; ++i)
	{
		for ( j = 0; j < cols; ++j)
		{
			if (a[i][j] == key) {
				cout << "Element found at index: " << i << "," << j << endl;
				keyFound = true;
				break;
			}
		}

		if (keyFound == true) {
			break;
		}
	}

	if (keyFound == false) cout << "Key Not Found\n";

	return 0;
}
















