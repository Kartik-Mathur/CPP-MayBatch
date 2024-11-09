class Solution {
public:

	int solve(vector<int>& price, int i, bool activeTransaction, int totalTransactions,
	          vector<vector<int> > &dp) {
		// base case
		if (totalTransactions >= 4 || i == price.size()) {
			return dp[i][totalTransactions] = 0;
		}


		if (dp[i][totalTransactions] != -1) {
			return dp[i][totalTransactions];
		}

		// recursive case
		if (!activeTransaction) {
			int op1 = -price[i] + solve(price, i + 1, !activeTransaction, totalTransactions + 1, dp);
			int op2 = 0 + solve(price, i + 1, activeTransaction, totalTransactions, dp);
			return dp[i][totalTransactions] = max(op1, op2);
		}
		else {
			int op1 = price[i] + solve(price, i + 1, !activeTransaction, totalTransactions + 1, dp);
			int op2 = 0 + solve(price, i + 1, activeTransaction, totalTransactions, dp);
			return dp[i][totalTransactions] = max(op1, op2);
		}
	}

	int maxProfit(vector<int>& prices) {

		vector<vector<int> > dp(prices.size() + 1, vector<int>(6, -1));

		return solve(prices, 0, false, 0, dp);


	}
};













