#include "Employee.h"

// Default constructor 
Employee::Employee() {
	firstName = "";
	lastName = "";
}
// Parameterized constructor 
Employee::Employee(string firstName, string lastName) {

	this->firstName = firstName;
	this->lastName = lastName;
}
// Setter methods
void Employee::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Employee::setLastName(string lastName) {
	this->lastName = lastName;
}
// Getter methods
string Employee::getFirstName() {
	return firstName;
}
string Employee::getLastName() {
	return lastName;
}
// Display information
void Employee::display() {
	cout << firstName << " " << lastName << endl;
}
