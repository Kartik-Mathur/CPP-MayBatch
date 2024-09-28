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

node* buildTree() {
	int data;
	cin >> data;
	if (data == -1) return NULL;

	node* root = new node(data);
	root->left = buildTree();
	root->right = buildTree();
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

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
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

int pre[] = {8 , 10 , 1 , 6 , 4 , 7 , 3 , 14 , 13};
int in[] = {1 , 10 , 4 , 6, 7, 8, 3, 13, 14 };
int n = sizeof(pre) / sizeof(int);
node* createTree(int s, int e, int &i) {
	// base case
	if (s > e) return NULL;

	// recursive case
	node* root = new node(pre[i++]);
	// Find the index of root->val
	int k;
	for (int j = s; j <= e; ++j)
	{
		if (in[j] == root->data) {
			k = j;
			break;
		}
	}
	root->left = createTree(s, k - 1, i);
	root->right = createTree(k + 1, e, i);
	return root;
}


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	// node* root = buildTree();
	int i = 0;
	node* root = createTree(0, n - 1, i);
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	levelOrder(root);
	mirror(root);
	levelOrder(root);


	return 0;
}
















