class Solution {
public:
	vector<vector<string>> ans;
	bool isPalindrome(string &s, int i, int j) {
		while (i < j) {
			if (s[i++] != s[j--]) return false;
		}
		return true;
	}

	void solve(string &s, vector<string> &x, int i = 0) {
		// base case
		if (i == s.size()) {
			ans.push_back(x);
			return;
		}

		// recursive case
		for (int k = i; k <= s.size(); k++) {
			if (isPalindrome(s, i, k)) {
				string t = s.substr(i, k - i + 1);
				x.push_back(t);
				solve(s, x, k + 1);
				x.pop_back(); // backtracking
			}
		}
	}

	vector<vector<string>> partition(string s) {
		vector<string> x;
		solve(s, x);
		return ans;
	}
};









