#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i;
	i = 2;

	while (i <= 5) {
		cout << i << " ";
		if (i == 3) {
			i = i + 1;
			continue;
		}

		i = i + 1;
	}
	cout << endl;


	return 0;
}
















