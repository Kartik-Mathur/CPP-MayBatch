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

node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) return head;
	// recursive case
	//1.Divide
	node* m = mid(head);
	node*a = head;
	node*b = m->next;
	m->next = NULL;
	//2.Sort
	a = mergeSort(a);
	b = mergeSort(b);
	//3.Merge
	node* nH = mergeLL(a, b);
	return nH;
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);

	printLL(head);
	head = mergeSort(head);
	printLL(head);




	return 0;
}
















