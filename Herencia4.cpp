#include<iostream>
using namespace std;

// Def class
class Person {

	public:
		
		Person(int x) { 
			cout << "Person::Person(int ) called" << endl; 
			}
		
		Person() {
			cout << "Person::Person() called" << endl; 
			}

}; // End class

// Class derived
class Faculty : virtual public Person {

	public:
		Faculty(int x) : Person(x) {
		cout << "Faculty::Faculty(int ) called" << endl;
	}

};

// Class derived
class Student : virtual public Person {

	public:
		Student(int x) : Person(x) {
		cout << "Student::Student(int ) called" << endl;
	}

};

class TA : public Faculty, public Student {

	public:
		TA(int x) : Student(x), Faculty(x), Person(x) {
		cout << "TA::TA(int ) called" << endl;
	}

};

// Driver program
int main() {
	
	TA ta1(30);

} // End driver

