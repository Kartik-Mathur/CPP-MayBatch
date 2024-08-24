#include <iostream>
#include <vector>
using namespace std;

int main() {
	int rows = 4, cols = 5;
	vector<vector<int> > a(rows,
	                       vector<int>(cols, 1));

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i].push_back(j);
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















