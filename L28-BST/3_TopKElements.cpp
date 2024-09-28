#include <iostream>
#include <queue>
#include <functional>
using namespace std;

void print(priority_queue<int, vector<int>, greater<int> > h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

	// priority_queue<int> h; // Maxheap
	priority_queue<int, vector<int>, greater<int> > h; // Minheap
	// priority_queue<int, vector<int>, less<int> > h; // Maxheap
	int k = 3, no;
	int i = 0;

	while (1) {
		cin >> no;
		if (no == -1) {
			print(h);
			continue;
		}

		if (i < k) { // This means abhi tak k elements heap mei nhi gye
			h.push(no);
			i++;
		}
		else { // i==k
			if (no > h.top()) {
				h.pop();
				h.push(no);
			}
		}
	}


	return 0;
}
















