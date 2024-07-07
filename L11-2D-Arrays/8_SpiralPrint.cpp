#include <iostream>
using namespace std;

void spiralPrint(int a[][4], int rows, int cols) {
	int sr = 0, er = rows - 1, sc = 0, ec = cols - 1;

	while (sr <= er and sc <= ec) {
		// 1. sr from sc to ec
		for (int j = sc; j <= ec; ++j)
		{
			cout << a[sr][j] << " ";
		}
		sr++;
		// 2. ec from sr to er
		for (int i = sr; i <= er; ++i)
		{
			cout << a[i][ec] << " ";
		}
		ec--;

		// 3. er from ec to sc
		if (er > sr) {
			for (int j = ec; j >= sc; --j)
			{
				cout << a[er][j] << " ";
			}
			er--;
		}

		// 4. sc from er to sr
		if (ec > sc) {
			for (int i = er; i >= sr; --i)
			{
				cout << a[i][sc] << " ";
			}
			sc++;
		}
	}
}

int main() {

	int a[4][4] = {
		{1, 2, 3, 4},
		{4, 5, 6, 55},
		{7, 8, 9, 555},
		{17, 18, 19, 5555},
	};

	spiralPrint(a, 4, 4);

	return 0;
}
















