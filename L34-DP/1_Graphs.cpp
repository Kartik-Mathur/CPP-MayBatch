#include <iostream>
#include <list>
using namespace std;

class Graph {
public:
	list<int> *adj;
	int n;
	Graph(int n) {
		adj = new list<int>[n];
		this->n = n;
	}

	void addEdge(int u, int v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir)
			adj[v].push_back(u);
	}

	void print() {
		for (int i = 0 ; i < n ; i++) {
			cout << i << "-->";
			for (auto neigh : adj[i]) {
				cout << neigh << ", ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(5);

	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(4, 3);
	g.addEdge(3, 2);

	g.print();

	return 0;
}
















