#include <iostream>
using namespace std;

int solve(int *price, int *weight, int capacity, int n) {
	// base case
	if (capacity == 0 || n == 0) {
		return 0;
	}
	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + solve(price, weight, capacity - weight[n - 1], n - 1);
	}
	op2 = 0 + solve(price, weight, capacity, n - 1);
	return max(op1, op2);
}

int topDown(int *price, int *weight, int capacity, int n, int dp[][100]) {
	// base case
	if (capacity == 0 || n == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) return dp[n][capacity];
	// recursive case
	int op1 = INT_MIN, op2 = INT_MIN;
	if (capacity >= weight[n - 1]) {
		op1 = price[n - 1] + topDown(price, weight, capacity - weight[n - 1], n - 1, dp);
	}
	op2 = 0 + topDown(price, weight, capacity, n - 1, dp);
	return dp[n][capacity] = max(op1, op2);
}

int main() {

	int price[] = {4, 5, 6, 3};
	int weight[] = {2, 4, 3, 1};

	int n = sizeof(price) / sizeof(int);
	int capacity = 5;

	cout << solve(price, weight, capacity, n) << endl;
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << topDown(price, weight, capacity, n, dp) << endl;



	return 0;
}
















