#include <iostream>
using namespace std;

int main() {
	int x = 10;
	char ch = 'A';

	char ch1 = 'B';
	cout << "ch  : " << ch << endl;
	cout << "&ch : " << (void*)&ch << endl;

	cout << "ch1  : " << ch1 << endl;
	cout << "&ch1 : " << (int*)&ch1 << endl;

	return 0;
}
















