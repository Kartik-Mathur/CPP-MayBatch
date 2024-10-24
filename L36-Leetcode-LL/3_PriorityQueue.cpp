#include <iostream>
#include <queue>
using namespace std;

class Pair {
public:
	int first;
	string second;
};

class comparator {
public:
	// Functor
	bool operator()(Pair &x, Pair &y) {
		return x.second > y.second;
	}
};

int main() {

	priority_queue<Pair, vector<Pair>, comparator > q; // Minheap

	Pair p;
	p.first = 95;
	p.second = "Vipin";
	q.push(p);
	q.push({100, "Niyati"});
	q.push({80, "Prateek"});
	q.push({70, "Simran"});
	q.push({85, "Aadeep"});

	while (!q.empty()) {
		Pair x = q.top();
		cout << x.first << ", " << x.second << endl;
		q.pop();
	}

	return 0;
}
















