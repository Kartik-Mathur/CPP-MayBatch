#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void update(vector<int> &a) {
	for (int i = 0; i < a.size(); ++i)
	{
		a[i] = i + 1;
	}
}

int main() {
	int n = 5;
	// cin >> n;

	vector<int> arr(n, -1);


	print(arr);
	update(arr);
	print(arr);



	return 0;
}
















