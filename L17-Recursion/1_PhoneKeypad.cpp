#include <iostream>
using namespace std;

char keys[][5] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void phonekeyPad(char* ip, int i, char* op, int j) {
	// base case
	if (ip[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}
	// recursive case
	int digit = ip[i] - '0';
	for (int k = 0; keys[digit][k] != '\0'; ++k)
	{
		char ch = keys[digit][k];
		op[j] = ch;
		phonekeyPad(ip, i + 1, op, j + 1);
	}
}

int main() {

	char ip[] = "24746";
	char op[100];

	phonekeyPad(ip, 0, op, 0);

	return 0;
}
















