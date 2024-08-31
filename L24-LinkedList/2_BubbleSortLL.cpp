#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtEnd(node* &head, node* &tail, int data) {
	node*n = new node(data);
	if (!head) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

node* mid(node* head) {
	if (!head || !head->next) {
		return head;
	}
	node* f = head->next;
	node* s = head;

	while (f and f->next)
	{
		f = f->next->next;
		s = s->next;
	}
	return s;
}

void bubbleSort(node* &head, node* &tail) {
	node* c, *p, *n;

	int N = lengthLL(head);
	for (int i = 0; i < N - 1; ++i)
	{
		c = head;
		p = NULL;
		while (c and c->next) {
			n = c->next;
			if (c->data > n->data) { // swap hoga
				if (p == NULL) { // head change hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else { // head change nahi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else { // swap nhi hoga
				p = c;
				c = n;
			}
		}
		tail = c;
	}
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);

	printLL(head);
	bubbleSort(head, tail);
	printLL(head);




	return 0;
}
















