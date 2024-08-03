#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int n, int number) {
	// 1. Check karo row and column ko
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == number || mat[k][j] == number) {
			return false;
		}
	}

	// 2. Small box mei bhi number nahi hona chahiye
	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;
	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (mat[i][j] == number) {
				return false;
			}
		}
	}

	return true;
}


bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}

		return true;
	}

	// recursive case
	// What if j overshoot n
	if (j == n) {
		return sudokuSolver(mat, i + 1, 0, n);
	}
	// what if cell is already filled
	if (mat[i][j] != 0) {
		return sudokuSolver(mat, i, j + 1, n);
	}
	// Ek empty cell ka kaam hum krenge baaki recursion ko bolenge
	for (int number = 1; number <= n; ++number)
	{
		if (isSafe(mat, i, j, n, number)) {
			mat[i][j] = number;
			bool kyaBakiSolveHua = sudokuSolver(mat, i, j + 1, n);
			if (kyaBakiSolveHua) {
				return true;
			}
			// Agar i,j par number rakhne ke baad solve nhi hota
			mat[i][j] = 0;
		}
	}

	return false;
}

int main() {

	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(mat, 0, 0, 9);

	return 0;
}
















