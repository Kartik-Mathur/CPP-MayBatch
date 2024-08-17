#include <iostream>
using namespace std;

/////////////////////////// BLUEPRINT ////////////////////////////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	int seats;

	// 1.DEFAULT CONSTRUCTOR
	Car() {
		name = NULL;
		cout << "Inside Default Constructor\n";
	}

	// 2.Parameterized Constructor
	Car(char*a, int p, int m, int s) {
		cout << "Inside Parameterized Constructor\n";
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		// name = new char[strlen(X.name) + 1];
		// strcpy(name, X.name);
		name = X.name;
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// Copy Assignment Operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment\n";
		if (name != NULL) { // Agar name kisi valid memory ko point kar raha hai
			// toh we need to free that memory
			delete []name;
		}
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}


	~Car() {
		cout << "Deleting Object " << name << endl;
		// delete[]name;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	void setName(char*n) {
		if (name != NULL) { // Agar name kisi valid memory ko point kar raha hai
			// toh we need to free that memory
			delete []name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	void setPrice(int p) {
		if (p > 100 and p < 150)
			price = p;
		else price = 120;
	}

	int getPrice() {
		return price;
	}
};
/////////////////////////// BLUEPRINT ////////////////////////////


int main() {

	Car A; // A is an Object of Car class
	// strcpy(A.name, "Maruti");
	// Setter
	A.setName("Maruti");
	// A.price = -100;
	// Getter and Setter
	A.setPrice(-150);
	cout << A.getPrice() << endl;
	A.model = 2020;
	A.seats = 4;
	Car B("BMW", 150, 2021, 2);

	Car C =  A;
	Car D = C;

	D.name[0] = 'T';

	A.print();
	B.print();
	C.print();
	D.print();


	return 0;
}
















