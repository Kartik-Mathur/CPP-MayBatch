#include <iostream>
using namespace std;

int staircase(int n, int k) {
	if (n == 0) return 1;
	if (n < 0) return 0;

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += staircase(n - i, k);
	}
	return ans;
}

int topDown(int n, int k, int dp[]) {
	if (n == 0) return dp[n] = 1;
	if (n < 0) return 0;

	if (dp[n] != -1) return dp[n];

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += topDown(n - i, k, dp);
	}
	return dp[n] = ans;
}

int bottomUp(int n, int k) {
	int dp[10000];

	dp[0] = 1;

	for (int i = 1; i <= n; ++i)
	{
		int ans = 0;

		for (int j = 1; j <= k; ++j)
		{
			if (i - j >= 0)
				ans += dp[i - j];
			else break;
		}

		dp[i] = ans;
	}

	return dp[n];
}

int nstairs(int n, int k) {
	int dp[10000];
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{

		dp[i] = 2 * dp[i - 1] - (i - 1 - k >= 0 ? dp[i - 1 - k] : 0);
	}

	return dp[n];
}


int main() {

	int n, k;
	cin >> n >> k;

	int dp[100000];
	memset(dp, -1, sizeof (dp));

	cout << topDown(n, k, dp) << endl;
	cout << bottomUp(n, k) << endl;
	cout << nstairs(n, k) << endl;
	cout << staircase(n, k) << endl;

	return 0;
}
















