class Solution {
public:
	unordered_map<string, bool> wordDict;

	bool solve(string &s, int *dp, int i = 0) {
		// base case
		if (i == s.size()) return dp[i] = true;

		if (dp[i] != -1) return dp[i];

		// recursive case
		for (int len = 1 ; len <= s.size(); len++) {
			string x = s.substr(i, len);
			if (wordDict.count(x)) {
				bool kyaBakiStringTutPai = solve(s, dp, i + len);
				if (kyaBakiStringTutPai) return dp[i] = true;
			}
		}

		return dp[i] = false;
	}

	bool wordBreak(string s, vector<string>& wD) {
		for (auto e : wD) {
			wordDict[e] = true;
		}
		int dp[s.size() + 1];
		memset(dp, -1, sizeof dp);

		return solve(s, dp);
	}
};














