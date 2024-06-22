#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch; // Because while loop ke andar jaane se pehle we are comparing
	// ch bucket with '$', garbage se toh kar nhi skte..
	// Thus, we took input of ch bucket outside the loop once..
	while (ch != '$') {
		cout << ch;

		cin >> ch;
	}




	return 0;
}
















