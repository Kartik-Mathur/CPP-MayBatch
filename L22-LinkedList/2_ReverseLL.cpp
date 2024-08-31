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

void reverseLL(node* &head, node* &tail) {
	node*c, *p, *n;
	c = head;
	p = NULL;

	while (c) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);

	printLL(head);
	reverseLL(head, tail);
	printLL(head);




	return 0;
}
















