#include <iostream>
using namespace std;

void updatePointer(int *x) {
	*x = *x + 1;
}

updateReferenceVariable(int &x) {
	x++;
}

int main() {

	int a = 10;

	// updatePointer(&a);
	updateReferenceVariable(a);
	cout << a << endl;

	return 0;
}
















