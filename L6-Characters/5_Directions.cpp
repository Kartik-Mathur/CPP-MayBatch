#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0;
	char ch;
	ch = cin.get();

	while (ch != '\n') {
		if (ch == 'N') y++;
		else if (ch == 'S') y--;
		else if (ch == 'E') x++;
		else if (ch == 'W') x--;

		ch = cin.get();
	}

	// Dictionary wise: E, N, S, W
	if (x >= 0) {
		// Print x times 'E'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	// Check the value of y
	char t;
	if (y >= 0) t = 'N';
	else t = 'S';

	y = abs(y); // y = |y|
	for (int i = 0; i < y; ++i)
	{
		cout << t;
	}

	if (x <= 0) {
		// print x times 'W'
		x = -1 * x;
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}



	return 0;
}
















