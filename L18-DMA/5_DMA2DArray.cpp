#include <iostream>
using namespace std;

int main() {

	int **a;
	int row, col;
	cin >> row >> col;

	a = new int*[row];

	for (int i = 0; i < row; ++i)
	{
		a[i] = new int[col];
	}
	int number = 1;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			a[i][j] = number++;
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	// DELETING THE ARRAY

	for (int i = 0; i < row; ++i)
	{
		delete []a[i];
	}

	delete []a;
	a = NULL;

	return 0;
}
















