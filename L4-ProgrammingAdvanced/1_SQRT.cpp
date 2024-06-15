#include <iostream>
using namespace std;

int main() {

	int n = 11;

	double ans = 0;
	double inc = 1;

	// while (ans * ans <= n) {
	// 	ans = ans + inc;
	// }
	// // Ek pichla i mera answer hoga, because i*i > n outside loop

	// ans = ans - inc;
	// inc = inc / 10;

	int p = 8;
	int cp = 0;
	while (cp <= p) {

		while (ans * ans <= n) {
			ans = ans + inc;
		}
		ans = ans - inc;

		inc = inc / 10;

		cp = cp + 1;
	}

	cout << ans << endl;




	return 0;
}
















