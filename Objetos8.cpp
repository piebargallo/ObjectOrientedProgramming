#include <iostream>
using namespace std;

class Car {  			// The class
	public:  		// Access specifier
		string brand;	// Attribute
		string model;	// Attribute
		int year;	// Attribute
		Car(string x, string y, int z); // Constructor declaration
}; // End class

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
	brand = x;
	model = y;
	year = z;
} // End constructor

// Driver program
int main() {
	// Create Car objects and call the constructor with different values
	Car carObj1("BMW", "X5", 1999);
	Car carObj2("Ford", "Munstang", 1969);
	
	// Print values
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
	
	return 0;
} // End driver program
