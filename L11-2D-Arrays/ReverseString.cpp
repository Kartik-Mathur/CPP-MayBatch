#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// char a[] = "hello world";
	char a[1000];
	// cin >> a;
	cin.getline(a, 100);

	int i = 0;
	int j = strlen(a) - 1;

	while (i < j) {
		swap(a[i], a[j]);

		i++;
		j--;
	}

	cout << "Reverse String: " << a << endl;


	return 0;
}
















