#include <iostream>
using namespace std;

int main() {

	char ch = 'e';

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 'E':
	case 'e':
		cout << "East\n";
		break;
	case 'S':
	case 's':
		cout << "South\n";
		break;
	case 'W':
	case 'w':
		cout << "West\n";
		break;
	default:
		cout << "Incorrect Input\n";
	}


	return 0;
}
















