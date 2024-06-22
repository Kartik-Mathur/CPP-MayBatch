#include <iostream>
using namespace std;

int main() {

	char ch;
	ch = cin.get(); // This will not ignore whitespace characters.

	while (ch != '$') {
		cout << ch;

		ch = cin.get();
	}




	return 0;
}
















