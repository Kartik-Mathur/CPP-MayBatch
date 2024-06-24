#include <iostream>
using namespace std;

void printSum(int x, int y) { // Parameters are recieved in arguments
	cout << "SUM : " << x + y << endl;
}

int sum(int a, int b) {
	int ans = a + b;

	return ans;
}


int main() {

	int a = 20, b = 20;
	int l = 120, m = 200;

	// printSum(a, b); // a and b are passed as parameters
	// printSum(l, m);

	int ans = sum(a, b);
	cout << "Sum is : " << ans << endl;
	if (ans % 2 == 0) {
		cout << "Sum is even\n";
	}
	else {
		cout << "Sum is odd\n";
	}


	return 0;
}
















