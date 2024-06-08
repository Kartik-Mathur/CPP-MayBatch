#include <iostream>
using namespace std;

int main()
{

	long long n, copy_n, cd, sum, ans, ld, i;
	cin >> n;
	copy_n = n;

	// 1. Count digits in n
	cd = 0;
	while (n != 0)
	{
		cd = cd + 1;
		n = n / 10;
	}

	n = copy_n;
	sum = 0;
	// 2. Extract digits one by one and ld^cd ko sum mei add kro
	while (n != 0)
	{
		ld = n % 10;

		ans = 1;
		i = 1;
		while (i <= cd)
		{
			ans = ans * ld;

			i = i + 1;
		}

		sum = sum + ans;

		n = n / 10;
	}

	if (sum == copy_n)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	return 0;
}
