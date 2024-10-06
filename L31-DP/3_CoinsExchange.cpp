#include <iostream>
#include<vector>
using namespace std;

int solve(int amount, int *coins, int n) {
	// base case
	if (amount == 0) {
		return 0;
	}

	// recursive case
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotiAmount = amount - coins[i];
			int chotaAns = solve(chotiAmount, coins, n);
			if (chotaAns != INT_MAX) {
				ans = min(ans, chotaAns + 1);
			}
		}
	}

	return ans;
}

int topDown(int amount, int *coins, int n, vector<int>  &dp) {
	// base case
	if (amount == 0) {
		return dp[amount] = 0;
	}

	if (dp[amount] != -1) return dp[amount];

	// recursive case
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotiAmount = amount - coins[i];
			int chotaAns = topDown(chotiAmount, coins, n, dp);
			if (chotaAns != INT_MAX) {
				ans = min(ans, chotaAns + 1);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int totalAmount, int *coins, int n) {
	vector<int> dp(totalAmount + 1, INT_MAX);

	dp[0] = 0;

	for (int amount = 1; amount <= totalAmount; ++amount)
	{
		for (int i = 0; i < n; ++i)
		{
			if (amount >= coins[i]) {
				int chotiAmount = amount - coins[i];
				if (dp[chotiAmount] != INT_MAX) {
					dp[amount] = min(dp[amount], dp[chotiAmount] + 1);
				}
			}
		}
	}

	for (int i = 0; i <= totalAmount; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;

	return dp[totalAmount];
}

int main() {

	int coins[] = {3, 7, 10};
	int n = sizeof(coins) / sizeof(int);

	int amount;
	cin >> amount;
	vector<int> dp(amount + 1, -1);

	cout << topDown(amount, coins, n, dp) << endl;
	cout << bottomUp(amount, coins, n) << endl;
	cout << solve(amount, coins, n) << endl;

	return 0;
}
















