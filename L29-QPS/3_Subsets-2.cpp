class Solution {
public:
	vector<vector<int>> x;
	void solve(vector<int> &a, vector<int> &ans, int i = 0) {
		// all ans vectors are valid subsets
		x.push_back(ans);
		// base case
		if (i == a.size()) return;
		// recursive case
		for (int j = i ; j < a.size(); j++) {
			if (i != j and a[j] == a[j - 1]) continue;
			ans.push_back(a[j]);
			solve(a, ans, j + 1);
			ans.pop_back();
		}
	}


	vector<vector<int>> subsetsWithDup(vector<int>& a) {
		vector<int>ans;
		sort(a.begin(), a.end());
		solve(a, ans);

		return x;
	}

	/*
	void solve(vector<int> &a, vector<int> &ans, int i = 0) {
		// base case
		if (i == a.size()) {
			for (int i = 0; i < ans.size(); i++) {
				cout << ans[i] << " ";
			}
			cout << endl;
			return;
		}
		// recursive case
		// ith element ko lelo
		ans.push_back(a[i]);
		solve(a, ans, i + 1);
		ans.pop_back();// backtracking
		// ith element ko mat lo
		solve(a, ans, i + 1);
	}
	*/
};