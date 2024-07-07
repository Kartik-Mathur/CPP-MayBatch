#include <iostream>
using namespace std;

void takeNStringsAndPrint() {
	// Take input of n strings and print them
	char a[100];
	int n;

	// Take input of n, this represents number of strings user will ip
	cin >> n;
	// cin.ignore();
	cin.get();

	// Loop mei n strings ko input karlo....
	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		cout << "Entered String: " << a << endl;
	}
}

int main() {
	takeNStringsAndPrint();
	// char a[100];
	// int n;
	// cin >> n;
	// cin.ignore(); // Yeh sirf number ke baad wale character ko ignore kr
	// // dega
	// cin.getline(a, 100);
	// cout << a << endl;





	return 0;
}
















