#include <iostream>
using namespace std;

/////////////////////////// BLUEPRINT ////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;
	int seats;

	// 1.DEFAULT CONSTRUCTOR
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2.Parameterized Constructor
	Car(char*a, int p, int m, int s) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
		seats = s;
	}

	// 3.Parameterized Constructor-2
	Car(char*a, int p, int m) {
		cout << "Inside Parameterized Constructor-2\n";
		strcpy(name, a);
		price = p;
		model = m;
		seats = 5;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}
};
/////////////////////////// BLUEPRINT ////////////////////////////


int main() {

	Car A; // A is an Object of Car class
	strcpy(A.name, "Maruti");
	A.price = 100;
	A.model = 2020;
	A.seats = 4;
	char bname[100] = "BMW";
	Car B(bname, 150, 2021, 2);

	// strcpy(B.name, "BMW");
	// B.price = 150;
	// B.model = 2021;
	// B.seats = 2;
	char cname[100] = "Audi";
	cname = "LORD ALTO";

	Car C(cname, 200, 2024);

	A.print();
	B.print();
	C.print();

	return 0;
}
















