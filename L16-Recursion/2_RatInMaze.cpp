#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int sol[][10], int i, int j, int n, int  m) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return false;
	}
	// recursive case
	// Ho sakta hai i,j solution ka part ho
	sol[i][j] = 1;
	// 1. Right side se check karo
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeBaatBani = ratInMaze(maze, sol, i, j + 1, n, m);
		if (kyaRightSeBaatBani) {
			return true;
		}
	}

	// 2. Neeche se check karo
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeBaatBani = ratInMaze(maze, sol, i + 1, j, n, m);
		if (kyaNeecheSeBaatBani) {
			return true;
		}
	}
	sol[i][j] = 0; // Backtracking
	return false;
}

int main() {
	int solution[10][10] = {0};

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	ratInMaze(maze, solution, 0, 0, 4, 4);

	return 0;
}
















