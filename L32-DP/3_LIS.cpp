#include <iostream>
#include <vector>
using namespace std;

int main() {

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8} ;
	int n = sizeof(a) / sizeof(int);


	int dp[1000];
	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}

	for (int i = 1; i < n; ++i)
	{
		int ans = 1;
		for (int j = i - 1; j >= 0; --j)
		{
			if (a[j] < a[i]) {
				ans = max(ans, dp[j] + 1);
			}
		}

		dp[i] = ans;
	}

	int lis_len = 0;
	int indx;
	for (int i = 0; i < n; ++i)
	{
		// cout << dp[i] << " ";
		if (dp[i] > lis_len) {
			lis_len = dp[i];
			indx = i;
		}
	}
	cout << endl << lis_len << endl;

	vector<int> lis;

	int element = a[indx];
	lis_len--;
	lis.push_back(element);
	int i = indx - 1;

	while (lis_len > 0) {
		if (a[i] < element and lis_len == dp[i]) {
			lis.push_back(a[i]);
			element = a[i];
			lis_len--;
		}

		i--;
	}

	for (int i = lis.size() - 1; i >= 0; --i)
	{
		cout << lis[i] << " ";
	}

	return 0;
}
















