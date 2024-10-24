#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
	unordered_map<string, list<string> > adj;

	void addEdge(string u, string v, bool bidir = true) {
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


};

int main() {

	Graph g;

	g.addEdge("Modi", "Trump", true);
	g.addEdge("Modi", "Yogi", true);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Pope", false);

	g.print();


	return 0;
}
















