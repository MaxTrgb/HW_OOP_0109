#pragma once
#include <iostream>
using namespace std;

class Employee
{
private:
	// Private variables specific to the "Employee" class
	string firstName;
	string lastName;
public:
	// Default and parameterized constructors
	Employee();
	Employee(string firstName, string lastName);

	// Setter methods
	void setFirstName(string firstName);
	void setLastName(string lastName);

	// Getter methods
	string getFirstName();
	string getLastName();

	// Virtual methods to calculate the bonus and print info
	virtual double calculateSalary() = 0;
	virtual void display();
};

