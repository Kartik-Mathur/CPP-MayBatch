#include <iostream>
using namespace std;

int lcs(char*a, int i, char *b, int j) {
	// base case
	if (!a[i] || !b[j]) {
		return 0;
	}
	// recursive case
	if (a[i] == b[j]) return 1 + lcs(a, i + 1, b, j + 1);
	else {
		return max(
		           lcs(a, i, b, j + 1),
		           lcs(a, i + 1, b, j)
		       );
	}
}

int lcs1(char*a, int n, char *b, int m) {
	// base case
	if (n == 0 || m == 0) {
		return 0;
	}

	// recursive case
	if (a[n - 1] == b[m - 1]) return 1 + lcs1(a, n - 1, b, m - 1);
	else {
		return max(
		           lcs1(a, n, b, m - 1),
		           lcs1(a, n - 1, b, m)
		       );
	}
}

int topDown(char*a, int n, char *b, int m, int dp[][100]) {
	// base case
	if (n == 0 || m == 0) {
		return dp[n][m] = 0;
	}

	if (dp[n][m] != -1)return dp[n][m];

	// recursive case
	if (a[n - 1] == b[m - 1]) return dp[n][m] = 1 + topDown(a, n - 1, b, m - 1, dp);
	else {
		return dp[n][m] = max(
		                      topDown(a, n, b, m - 1, dp),
		                      topDown(a, n - 1, b, m, dp)
		                  );
	}
}

int bottomUp(char *a, char *b) {
	int n = strlen(a);
	int m = strlen(b);

	int dp[100][100] = {0};

	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	for (int i = 0; i <= strlen(a); ++i)
	{
		for (int j = 0; j <= strlen(b); ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}

void findLCS(int dp[][100], int n, int m, char* ans, int i, char*a, char *b) {
	// base case
	if (i == -1) {
		cout << ans << endl;
		return;
	}
	// recursive case
	if (a[n - 1] == b[m - 1]) {
		ans[i] = a[n - 1];
		findLCS(dp, n - 1, m - 1, ans, i - 1, a, b);
	}
	else {
		if (dp[n - 1][m] == dp[n][m - 1]) {
			findLCS(dp, n - 1, m, ans, i, a, b);
			findLCS(dp, n, m - 1, ans, i, a, b);
		}
		else if (dp[n - 1][m] > dp[n][m - 1]) findLCS(dp, n - 1, m, ans, i, a, b);
		else findLCS(dp, n, m - 1, ans, i, a, b);
	}
}

int main() {

	char a[] = "abcdc";
	char b[] = "abdcc";

	cout << lcs(a, 0, b, 0) << endl;
	cout << lcs1(a, strlen(a), b, strlen(b)) << endl;
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << topDown(a, strlen(a), b, strlen(b), dp) << endl;

	// for (int i = 0; i <= strlen(a); ++i)
	// {
	// 	for (int j = 0; j <= strlen(b); ++j)
	// 	{
	// 		dp[i][j] != -1 ? cout << dp[i][j] << " " : cout << "_ ";
	// 	}
	// 	cout << endl;
	// }

	int x = bottomUp(a, b);
	cout << x << endl;

	char ans[1000];
	ans[x] = '\0';
	findLCS(dp, strlen(a), strlen(b), ans, x - 1, a, b);
	return 0;
}
















