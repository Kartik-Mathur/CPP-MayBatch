class Solution {
public:

	bool solve(string &s, string &p, int i, int j, int n, int m, vector<vector<int> > &dp) {
		// base case
		if (i >= n) {
			for (int k = j; k < m; ++k)
			{
				if (p[k] != '*') {
					dp[i][j] = 2;
					return false;
				}
			}
			dp[i][j] = 1;
			return true;
		}

		if (j >= m) return false;

		if (dp[i][j] != -1) return dp[i][j] == 1;


		// recursive case
		bool ans = false;
		if (s[i] == p[j] or p[j] == '?') {
			ans = solve(s, p, i + 1, j + 1, n, m, dp);
		}
		else if (p[j] == '*') {
			bool match = solve(s, p, i + 1, j, n, m, dp);
			bool dontmatch = solve(s, p, i, j + 1, n, m, dp);
			ans = match || dontmatch;
		}

		if (ans == true) {
			dp[i][j] = 1;
		}
		else {
			dp[i][j] = 2;
		}

		return ans;
	}

	bool isMatch(string s, string p) {
		vector<vector<int> > dp(s.size() + 1, vector<int>(p.size() + 1, -1));

		return solve(s, p, 0, 0, s.size(), p.size(), dp);
	}
};














