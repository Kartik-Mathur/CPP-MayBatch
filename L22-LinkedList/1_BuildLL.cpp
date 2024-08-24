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

void insertAtFront(node* &head, node* &tail, int data) {
	node*n = new node(data);
	if (!head) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
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

void insertAtMid(node* &head, node*&tail, int pos, int data) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp->next;
		}

		node*n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}


void deleteAtFront(node*&head, node*&tail) {
	if (!head) {
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node*&head, node*&tail) {
	if (!head) {
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			temp = temp->next;
		}
		node* n = temp->next;
		temp->next = n->next;
		delete n;
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

int main() {

	node* head = NULL, *tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);

	insertAtEnd(head, tail, 5);
	insertAtMid(head, tail, 3, 8);
	printLL(head);

	deleteAtMid(head, tail, 3);

	printLL(head);




	return 0;
}
















