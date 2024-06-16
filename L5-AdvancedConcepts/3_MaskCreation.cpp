#include <iostream>
using namespace std;

int main() {

	int l = 10, r = 2;
	// r se peeche wale bits saare 1, and all others are 0
	int lowerBits_One = (1 << r) - 1;
	// l se aage wale bits saare 1, and all others are 0
	int upperBits_One = ( (~0) << (l + 1));

	int mask = (lowerBits_One | upperBits_One);
	mask = (~mask);

	for (int i = 31; i >= 0; --i)
	{
		// int val = (1 << i);
		if (( mask & (1 << i)) == 0) {
			cout << 0;
		}
		else {
			cout << 1;
		}
	}
	cout << endl;

	return 0;
}



























