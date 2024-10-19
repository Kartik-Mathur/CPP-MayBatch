#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l; // Containers

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_front(5);

	// FOR EACH
	// for every data d that belongs to linkedlist l
	for (auto d : l) {
		cout << d << "->";
	}
	cout << "NULL\n";

	// Iterator
	list<int>::iterator it;
	for (it = l.begin(); it != l.end(); it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	list<int>::reverse_iterator it1;
	for (it1 = l.rbegin(); it1 != l.rend(); it1++) {
		cout << *it1 << "-->";
	}
	cout << "NULL\n";

	return 0;
}
















