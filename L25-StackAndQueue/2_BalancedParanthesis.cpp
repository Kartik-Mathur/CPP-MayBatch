#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;

	for (int i = 0; a[i]; ++i)
	{
		char ch = a[i];

		switch (ch) {
		case '{':
		case '(':
		case '[':
			s.push(ch);
			break;
		case '}':
			if (s.empty() || s.top() != '{')  return false;
			s.pop();
			break;
		case ')':
			if (s.empty() || s.top() != '(')  return false;
			s.pop();
			break;
		case ']':
			if (s.empty() || s.top() != '[')  return false;
			s.pop();
		}
	}

	return s.empty();
}

int main() {

	char a[] = "{ a + [ b+ (c + d)] + (e + f) }";

	if (isBalanced(a)) cout << "Balanced\n";
	else cout << "Not Balanced\n";

	return 0;
}
















