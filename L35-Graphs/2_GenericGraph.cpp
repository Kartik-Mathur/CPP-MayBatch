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


	void bfs(T src) {
		queue<T> q;
		unordered_map<T, bool> visited;

		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T x = q.front();
			q.pop();

			cout << x << " ";
			for (auto child : adj[x]) {
				if (!visited[child]) {
					q.push(child);
					visited[child] = true;
				}
			}
		}

		cout << endl;
	}

	void SSSP(T src, T des) {
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;
		unordered_map<T, T> parent;

		q.push(src);
		distance[src] = 0; // src ka distance khud se is 0
		visited[src] = true;
		parent[src] = src;

		while (!q.empty()) {
			T x = q.front();
			q.pop();

			for (auto child : adj[x]) {
				if (!visited[child]) {
					q.push(child);
					visited[child] = true;
					distance[child] = distance[x] + 1;
					parent[child] = x;
				}
			}
		}

		// for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		// }

		// Printing the path from des to src
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

};

int main() {

	Graph<int> g;

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v = v + board[v];
			g.addEdsge(u, v, false);
		}
	}
	/*
		g.addEdge(0, 1);
		g.addEdge(0, 4);
		g.addEdge(2, 1);
		g.addEdge(2, 4);
		g.addEdge(2, 3);
		g.addEdge(4, 3);
		g.addEdge(5, 3);
	*/
	// g.print();
	g.SSSP(0, 36);

	return 0;
}
















