#include <iostream>
#include <vector>
using namespace std;

int solven3(int *a, int n) {
	int ms = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int ans = 0;
			for (int k = i; k <= j; ++k)
			{
				ans += a[k];
			}
			ms = max(ms, ans);
		}
	}

	return ms;
}

int solven2(int*a, int n) {
	vector<int> ps(n);
	for (int i = 0; i < n; ++i)
	{
		ps[i] += ((i - 1 >= 0) ? ps[i - 1] : 0) + a[i];
	}
	int ms = 0;

	int si = -1, sj = -2;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int ans = ps[j] - ((i - 1 >= 0) ? ps[i - 1] : 0);
			if (ans > ms) {
				si = i;
				sj = j;
				ms = ans;
			}
		}
	}
	cout << "Maximum sum: " << ms << endl;
	cout << "Elements: ";
	for (int i = si; i <= sj; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return ms;
}

int kadanes(int *a, int n) {
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if (sum < 0) sum = 0;
		ans = max(ans, sum);
	}

	return ans;
}

int circularSum(int *a, int n) {
	int ans = 0, totalSum = 0;
	int op1, op2;
	op1 = kadanes(a, n);


	for (int i = 0; i < n; ++i)
	{
		totalSum += a[i];
		a[i] = -a[i];
	}

	int least_sum_original_array = kadanes(a, n);
	op2 = totalSum + least_sum_original_array;
	return max(op1, op2);
}



int main() {

	// int a[] = {1, 2, -4, 3, 6, -2, 8, -10, 5};
	int a[] = { 1, 4, -11, 2, 6, -10, 15, -9, 11, 14};
	int n = sizeof(a) / sizeof(int);

	cout << solven3(a, n) << endl;
	cout << solven2(a, n) << endl;
	cout << kadanes(a, n) << endl;
	cout << circularSum(a, n) << endl;

	return 0;
}
















