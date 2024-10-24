#include <iostream>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>
using namespace std;
template<typename T>
class Graph {
public:
	map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "--> ";
			for (auto neigh : p.second) {
				cout << neigh << ", ";
			}
			cout << endl;
		}
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;

		// recursive case
		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		dfsHelper(src, visited);

		int components = 1;
		for (auto p : adj) {
			if (!visited[p.first]) {
				dfsHelper(p.first, visited);
				components++;
			}
		}

		cout << "\nComponents : " << components << endl;
	}



};

int main() {

	Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(5, 3);
	g.addEdge(6, 7);
	g.addEdge(16, 17);
	// g.print();
	// unordered_map<int, bool> visited;
	// g.dfs(0, visited);

	g.dfs(0);


	return 0;
}
















