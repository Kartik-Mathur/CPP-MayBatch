#include <iostream>
using namespace std;

void update(int* x) {
	*x = *x + 1;
}

void updateRef(int &x) {
	x = x + 1;
}

int main() {


	int a = 10;

	cout << "a  : " << a << endl;

	// update(&a);
	updateRef(a);

	cout << "a  : " << a << endl;


	return 0;
}
















