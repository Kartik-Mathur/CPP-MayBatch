#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 55},
		{7, 8, 9, 555},
		{17, 18, 19, 5555},
	};

	int rows = sizeof(a) / sizeof(a[0]);
	int cols = sizeof(a[0]) / sizeof(int);



	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
















