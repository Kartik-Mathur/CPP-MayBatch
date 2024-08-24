#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
};

int main() {

	node a, b;
	a.data = 1;
	b.data = 2;

	a.next = &b;
	b.next = NULL;

	node* head = &a;
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";


	return 0;
}
















