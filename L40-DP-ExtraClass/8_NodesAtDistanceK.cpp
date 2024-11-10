#define node TreeNode
class Solution {
public:
	vector<int> ans;

	void findAtK(node* root, int k, int d = 0) {
		if (!root) {
			return;
		}

		if (d == k) {
			ans.push_back(root->val);
			return;
		}

		findAtK(root->left, k, d + 1);
		findAtK(root->right, k, d + 1);
	}

	int solve(node* root, node* target, int d) {
		// base case
		if (!root) return -1;

		// recursive case
		if (root == target) {
			return 0;
		}
		int left = solve(root->left, target, d);
		if (left != -1) {
			if (left + 1 == d) {
				ans.push_back(root->val);
				return -1;
			}
			else {
				int covered_d = left + 2;
				int remaining_d = d - covered_d;
				findAtK(root->right, remaining_d);
				return left + 1;
			}
		}

		int right = solve(root->right, target, d);
		if (right != -1) {
			if (right + 1 == d) {
				ans.push_back(root->val);
				return -1;
			}
			else {
				int covered_d = right + 2;
				int remaining_d = d - covered_d;
				findAtK(root->left, remaining_d);
				return right + 1;
			}
		}
		return -1;
	}

	vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
		findAtK(target, k);
		solve(root, target, k);
		return ans;
	}
};





















