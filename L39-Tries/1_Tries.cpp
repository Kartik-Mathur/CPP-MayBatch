#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char ch;
	unordered_map<char, node*> h;
	bool isEnd;
	node(char c) {
		ch = c;
		isEnd = false;
	}
};

class Tries {
public:
	node* root;
	Tries() {
		root = new node('\0');
	}

	void addWord(const string &s) {
		node* temp = root;

		for (int i = 0; i < s.size(); ++i)
		{
			char x = s[i];
			if (temp->h.count(x) == 0) {
				node* t = new node(x);
				temp->h[x] = t;
			}

			temp = temp->h[x];
		}
		temp->isEnd = true;
	}

	bool searchWord(const string &s) {
		node* temp = root;

		for (int i = 0; i < s.size(); ++i)
		{
			char x = s[i];
			if (temp->h.count(x) == 0 || temp->h.count(x) == 0) {
				return false;
			}

			temp = temp->h[x];
		}
		return temp->isEnd;
	}

	void autoSuggestion() {

	}

};

int main() {

	Tries t;

	t.addWord("Hello");
	t.addWord("He");
	t.addWord("Bat");
	t.addWord("Bam");



	return 0;
}
















