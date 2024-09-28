#include <iostream>
using namespace std;

class Person {
public:
	void operator()() {
		cout << "Inside Functor\n";
	}
};


int main() {

	Person p;



	return 0;
}
















