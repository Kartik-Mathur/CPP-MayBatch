#include <iostream>
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

node* buildTree() {
	int data;
	cin >> data;
	if (data == -1) return NULL;

	node* root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

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

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) return  {0, 0};
	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;
	int op1, op2, op3;
	op1 = left.height + right.height;
	op2 = left.diameter;
	op3 = right.diameter;
	p.diameter = max(op1, max(op2, op3));

	return p;
}


int main() {

	node* root = buildTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	Pair ans = fastDiameter(root);
	cout <<  "Total height: " << ans.height << endl;
	cout <<  "Diameter: " << ans.diameter << endl;

	return 0;
}
















