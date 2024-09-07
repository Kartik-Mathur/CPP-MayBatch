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

int countNodes(node* root) {
	if (!root) return 0;

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int height(node* root) {
	if (!root) return 0;

	return max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root) { // O(n^2)
	if (!root) return 0;

	int op1, op2, op3;
	op1 = height(root->left) + height(root->right);
	op2 = diameter(root->left);
	op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

int main() {

	node* root = buildTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout <<  "Total Nodes: " << countNodes(root) << endl;
	cout <<  "Total height: " << height(root) << endl;
	cout <<  "Diameter: " << diameter(root) << endl;

	return 0;
}
















