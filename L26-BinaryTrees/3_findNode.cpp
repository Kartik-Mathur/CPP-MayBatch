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

node* search(node* root, int key) {
	if (!root) return NULL;

	// recursive case
	if (root->data  == key) return root;
	node* leftKaAns = search(root->left, key);
	if (leftKaAns) return leftKaAns;

	return search(root->right, key);
}

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}


int main() {

	node* root = buildTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	node* x = search(root, 130);
	if (x) cout << "Found " << x->data << endl;
	else cout << "Not Found\n";

	mirror(root);


	return 0;
}
















