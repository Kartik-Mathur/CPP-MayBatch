#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n) {
	// Check karo kahi current column mei queen toh nahi hai
	for (int k = 0; k < i; ++k)
	{
		if (board[k][j] == 1) {
			return false;
		}
	}

	int original_i = i, original_j = j;

	// Upper left diagonal
	while (i >= 0 and j >= 0) {
		if (board[i--][j--]) {
			return false;
		}
	}

	// Upper right diagonal
	i = original_i; j = original_j;
	while (i >= 0 and j < n) {
		if (board[i--][j++]) {
			return false;
		}
	}

	return true;
}

bool NQueen(int board[][10], int i, int n) {
	// base case
	if (i == n) {
		// print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	// recursive case
	for (int j = 0; j < n; ++j)
	{
		if (isSafe(board, i, j, n)) {
			board[i][j] = 1;// Queen place krdi
			bool kyaBakiRakhPaye = NQueen(board, i + 1, n);
			if (kyaBakiRakhPaye) {
				return true;
			}
			// If baaki queens place nhi ho paai
			board[i][j] = 0; // Queen ko backtrack krdo
		}
	}
	// Is row mei queen rakhna possible nahi hai
	return false;
}

int main() {

	int board[10][10] = {0};
	int n;
	cin >> n;
	NQueen(board, 0, n);

	return 0;
}
















