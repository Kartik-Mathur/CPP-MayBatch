#include <iostream>
using namespace std;

class DSU {
public:
	vector<int> parent;
	DSU(int n) {
		parent.resize(n + 1);
		for (int i = 0; i <= n; ++i) make_set(i);
	}

	void make_set(int i) {
		parent[i] = i;
	}

	int find_set(int u) {
		if (u == parent[u]) return u;

		return find_set(parent[u]);
	}

	void union_set(int u, int v) {
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		parent[leader_v] = leader_u;
	}
};

int main() {


	return 0;
}
















