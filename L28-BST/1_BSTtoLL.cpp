#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};


node* insertInBST(node*root, int d) {
	// base case
	if (!root) {
		root = new node(d);
		return root;
	}

	// recursive case
	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}


node* buildBST() {
	node* root = NULL;
	int data;
	cin >> data;

	while (data != -1) {
		root = insertInBST(root, data);
		cin >> data;
	}
	return root;
}


void preOrder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

void levelOrder(node* root) {
	if (!root) return;

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* x = q.front();
		q.pop();

		if (x) {
			cout << x->data << " ";
			if (x->left) q.push(x->left);
			if (x->right) q.push(x->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

class LinkedList {
public:
	node* head, *tail;
};

LinkedList BstToLL(node* root) {
	// base case
	if (!root) return {NULL, NULL};
	// recursive case
	if (root->left and root->right) {
		LinkedList left = BstToLL(root->left);
		LinkedList right = BstToLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		return {left.head, right.tail};
	}
	else if (!root->left and root->right) {
		LinkedList right = BstToLL(root->right);
		root->right = right.head;
		return {root, right.tail};
	}
	else if (root->left and !root->right) {
		LinkedList left = BstToLL(root->left);
		left.tail->right = root;
		return {left.head, root};
	}
	else {
		return {root, root};
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
}

int main() {
	// 8 3 10 1 6 14 4 7 13 9 -1
	node* root = buildBST();

	// preOrder(root);
	// cout << endl;
	// inOrder(root);
	// cout << endl;
	// postOrder(root);
	// cout << endl;

	LinkedList l = BstToLL(root);

	printLL(l.head);


	return 0;
}


