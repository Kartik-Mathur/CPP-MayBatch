#include <iostream>
using namespace std;
void printABC() {
	char ch = 'a';
	for (int i = 0; i < 26; ++i)
	{
		cout << ch++ << " ";
	}
	cout << endl;
}

void printArray(int *a, int n = 26) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

bool stringsPermutations(char* a, char *b) {
	int freq[26] = {0}, indx, i;

	for (i = 0; a[i] ; ++i)
	{
		indx = a[i] - 'a';
		freq[indx]++;
	}
	// printABC();
	// printArray(freq);

	for (i = 0; b[i] ; ++i)
	{
		indx = b[i] - 'a';
		freq[indx]--;
	}
	// printArray(freq);

	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) return false;
	}
	return true;
}

int main() {

	char a[] = "abcd";
	char b[] = "dcbax";

	if (stringsPermutations(a, b)) {
		cout << "Permutations hai\n";
	}
	else {
		cout << "Permutations nahi hai\n";
	}

	return 0;
}
















