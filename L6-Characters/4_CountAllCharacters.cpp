#include <iostream>
using namespace std;

int main() {
	int characters = 0, spaces = 0, special = 0, digits = 0;

	char ch;
	ch = cin.get(); // This will not ignore whitespace characters.

	while (ch != '$') {
		// Logic to count characters .... goes here
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
			characters++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			spaces++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}


	cout << "Characters    : " << characters << endl;
	cout << "Digits        : " << digits << endl;
	cout << "White Spaces  : " << spaces << endl;
	cout << "Special       : " << special << endl;




	return 0;
}
















