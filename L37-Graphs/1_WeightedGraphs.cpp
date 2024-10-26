#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

class Graph {
public:
	map<string, list<pair<string, int> > > adj;

	void addEdge(string u, string v, int d, bool bidir = true) {
		adj[u].push_back(make_pair(v, d));
		if (bidir) {
			adj[v].push_back({u, d});
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto n : p.second) {
				cout << "(" << n.first << ", " << n.second << ")";
			}
			cout << endl;
		}
	}

	void dijkstras(string src, string end_node) {
		set<pair<int, string> > s;
		unordered_map<string, int> distance;
		unordered_map<string, string> par;

		for (auto p : adj) {
			distance[p.first] = INT_MAX;
		}
		distance[src] = 0;
		s.insert({0, src});
		par[src] = src;
		while (!s.empty()) {
			auto p = *(s.begin());
			s.erase(s.begin());

			string parent = p.second;
			int parent_distance = p.first;
			for (auto ch : adj[parent]) {
				string des = ch.first;
				int edge_dist = ch.second;

				if (parent_distance + edge_dist < distance[des]) {
					// des ka current distance update hone wala hai
					// toh set mei latest distance hi add krna hoga
					auto x = s.find({distance[des], des});
					// set mei find kia, agar mill gaya toh delete karo
					if (x != s.end()) {
						s.erase(x);
					}

					distance[des] = parent_distance + edge_dist;
					par[des] = parent;
					s.insert({distance[des], des});
				}
			}
		}


		for (auto p : distance) {
			cout << "Distance of " << src << " from " << p.first << " : " << p.second << endl;
		}

		for (auto p : par) {
			cout << "Parent of " << p.first << " : " << p.second << endl;
		}

		while (end_node != par[end_node]) {
			cout << end_node << "<--";
			end_node = par[end_node];
		}
		cout << end_node << endl;
	}
};

int main() {
	Graph g;
	g.addEdge("A", "B", 1);
	g.addEdge("D", "B", 2);
	g.addEdge("D", "C", 3);
	g.addEdge("A", "D", 5);
	g.addEdge("A", "C", 8);

	// g.print();
	g.dijkstras("A", "C");

	return 0;
}
















