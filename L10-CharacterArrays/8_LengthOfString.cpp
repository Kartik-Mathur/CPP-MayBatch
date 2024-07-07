#include <iostream>
using namespace std;

int length(char *a) {
	int i;
	for (i = 0; a[i] != '\0' ; ++i) ;

	return i;
}

int main() {
	char a[100000];
	cin.getline(a, 100000);

	cout << "String: " << a << endl; .
	cout << "Length: " << length(a) << endl;

	return 0;
}
















