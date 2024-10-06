#include <iostream>
using namespace std;

class node {
public:
	string key;
	int data;
	node* next;
	node(string s, int d) {
		key = s;
		data = d;
		next = NULL;
	}
};

class hashmap {
private:
	int hashFunction(const string &key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += ((mul % ts) * (key[i] % ts)) % ts;
			mul *= 37;
			mul %= ts;
			ans %= ts;
		}

		return (ans % ts);
	}


	void rehashing() {
		node**olda = a;
		int oldts = ts;

		a = new node*[2 * ts];
		ts *= 2;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}
		cs = 0;

		// Insert the old data into new table
		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head) {
				string key = head->key;
				int data = head->data;
				insert(key, data);
				node* temp = head;
				head = head->next;
				delete temp;
			}
		}

		delete []olda;
	}

public:
	node ** a;
	int ts;
	int cs;

	hashmap(int s = 7) {
		a = new node*[s];
		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL;
		}
		ts = s;
		cs = 0;
	}

	void insert(const string &key, int data) {
		int hashIndex = hashFunction(key);

		node* n = new node(key, data);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float load_factor = cs / (ts * 1.0);
		if (load_factor >= 0.6) {
			rehashing(); // Table ko double kardo in size
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << "-->";
			while (head) {
				cout << "(" << head->key << ", " << head->data << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}

	node* search(const string &key) {
		int hashIndex = hashFunction(key);

		node* head = a[hashIndex];
		while (head) {
			if (head->key == key) return head;
			head = head->next;
		}

		return NULL;
	}

	int& operator[](string key) {
		node* ans = search(key);
		if (ans == NULL) {
			// present nahi hogi key
			int randomVal;
			insert(key, randomVal);
			ans = search(key);
			return ans->data;
		}
		else {
			// present hogi key
			return ans->data;
		}
	}
};

int main() {
	hashmap h;
	h.insert("Mango", 100);
	h.insert("Apple", 150);
	h.insert("Kiwi", 50);
	h.insert("Pineapple", 80);
	h.insert("Guava", 70);

	// Insertion
	h["Banana"] = 40;

	// Print
	cout << h["Banana"] << endl;

	// Update
	h["Banana"] = 140;

	h.print();


	return 0;
}
















