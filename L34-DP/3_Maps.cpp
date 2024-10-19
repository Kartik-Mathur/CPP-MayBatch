#include <iostream>
#include <list>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	unordered_map<string, int > h;

	h["Mango"] = 100;
	h["Kiwi"] = 10;
	h["Papaya"] = 50;
	h["Orange"] = 50;
	h["Melon"] = 50;
	h["Guava"] = 50;

	h.insert({"pineapple", 20});

	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}

	for (int i = 0 ; i < h.bucket_count(); i++) {
		cout << i << "--> ";
		for (auto it = h.begin(i); it != h.end(i); it++) {
			cout  << "(" << it->first << ", " << it->second << ") ";
		}
		cout << endl;
	}

	return 0;
}
















