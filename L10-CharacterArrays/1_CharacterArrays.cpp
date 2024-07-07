#include <iostream>
using namespace std;

int main() {

	char a[] = {'A', 'B', 'C' };
	char b[] = {'A', 'B', 'C', 'D', 'E', 'F' };
	char c[] = {'X', 'Y', '\0'};
	char d[100] = "Hello World";

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << sizeof(d) << endl;

	// for (int i = 0; i < 100; ++i)
	// {
	// 	cout << c[i] << "-";
	// }
	// cout << endl;


	return 0;
}
















