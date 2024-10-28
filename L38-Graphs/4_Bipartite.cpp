#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <list>
using namespace std;


class Graph {
public:
	map < string, list<string > >adj;

	void addEdge(string u, string v, bool bidir = false) {
		adj[u].push_back(v);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto n : p.second) {
				cout << n << " ";
			}
			cout << endl;
		}
	}
	bool bipartiteHelper(T src, T parent, int color[], int c = 1) {
		// code
		// current node par color fill kardo
		color[src] = c;
		for (auto child : adj[src]) {
			if (color[child] == 0) {
				bool kyaChotaGraphBipartiteHai = bipartiteHelper(child, src, color, 3 - c);
				if (kyaChotaGraphBipartiteHai == false) {
					return false;
				}
			}
			else if (child != parent and c == color[child]) {
				return false;
			}
		}

		return true;
	}

	bool bipartite() {
		// every index represents the node, and all nodes have default color 0
		// this simply means meine abhi tak kisi node par color nahi kia
		int color[100000] = {0};

		for (auto p : adj) {
			if (color[p.first] == 0) {
				bool ans = bipartiteHelper(p.first, -1, color);
				if (!ans) return false;
			}
		}

		return true;
	}

};

int main() {

	Graph g;
	g.addEdge("English", "Maths");
	g.addEdge("Hindi", "Maths");
	g.addEdge("Maths", "HTML");
	g.addEdge("HTML", "CSS");
	g.addEdge("CSS", "Bootstrap");
	g.addEdge("CSS", "JS");
	g.addEdge("Maths", "C++");
	g.addEdge("C++", "MERN");
	g.addEdge("C++", "CP");

	list<string> ans = g.topologicalSort();

	for (auto x : ans) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
















