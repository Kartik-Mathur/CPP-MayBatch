#include <iostream>
using namespace std;

int main() {

	int a = -10;

	// (condition) ? OnTrue_YehChlega : OnFalse_YehChlega;
	(a % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

	// We can also assign value using ternary operator
	int x = ( (a > 5)  ? 5000  :  -5000 );
	cout << x << endl;


	return 0;
}
















