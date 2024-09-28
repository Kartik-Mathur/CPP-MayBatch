#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	vector<int> v;
	void heapify(int i) {
		int left = 2 * i;
		int right = left + 1;

		int mi = i; // Lets assume sabse choti value is on index i
		if (left < v.size() and
		        v[left] < v[mi]) {
			mi = left;
		}

		if (right < v.size()
		        and v[right] < v[mi]) {
			mi = right;
		}

		if (mi != i) {
			swap(v[mi], v[i]);
			heapify(mi);
		}
	}
public:
	Minheap() {
		v.push_back(-1); // To block the 0th index
	}
	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;
		while (p >= 1 and v[p] > v[c]) {
			swap(v[p], v[c]);
			p /= 2;
			c /= 2;
		}
	}

	int top() {
		return v[1];
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

	h.push(4);
	h.push(2);
	h.push(1);
	h.push(3);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	return 0;
}
















