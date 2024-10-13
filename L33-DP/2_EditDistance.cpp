#include <iostream>
using namespace std;

int solve(char *a, char *b, int n, int m, int dp[][100]) {
	// base case
	if (m == 0) return dp[n][m] = n;
	if (n == 0) return dp[n][m] = m;

	if (dp[n][m] != -1) return dp[n][m];

	// recursive case
	if (a[n - 1] == b[m - 1]) return dp[n][m] = solve(a, b, n - 1, m - 1, dp);
	else {
		int op1, op2, op3;
		op1 = solve(a, b, n, m - 1, dp); // Insertion
		op2 = solve(a, b, n - 1, m - 1, dp); // Replace
		op3 = solve(a, b, n - 1, m, dp); // Delete
		return dp[n][m] = 1 + min(op1, min(op2, op3));
	}
}

int main() {

	char a[] = "Saturday";
	char b[] = "Sunday";

	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << solve(a, b, strlen(a), strlen(b), dp) << endl;





	return 0;
}
















