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

node* mergeLL(node*a, node*b) {
	if (!a) return b;
	if (!b) return a;

	if (a->data < b->data) {
		node* nH = a;
		nH->next = mergeLL(a->next, b);
		return nH;
	}
	else {
		node*nH = b;
		nH->next = mergeLL(a, b->next);
		return nH;
	}
}

int main() {

	node* head = NULL, *tail = NULL;
	node* head1 = NULL, *tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);
	insertAtEnd(head1, tail1, 7);

	printLL(head);
	printLL(head1);
	head = mergeLL(head, head1);
	printLL(head);




	return 0;
}
















