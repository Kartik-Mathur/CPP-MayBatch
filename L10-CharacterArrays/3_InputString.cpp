#include <iostream>
using namespace std;

void inputString(char*a, int s, char delimiter = '\n') {
	int i = 0;
	char ch;

	ch = cin.get(); // Initialisation
	while (ch != delimiter and i < s - 1) {
		a[i++] = ch;

		ch = cin.get();
	}

	a[i] = '\0';
}

int main() {

	char a[500];

	// Input lelo till '\n'
	inputString(a, 500, '$');

	cout << a << endl;



	return 0;
}
















