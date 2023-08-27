#include "SalaryWorker.h"  

// Default constructor for SalaryWorker
SalaryWorker::SalaryWorker() {
	salary = 0.0;
	bonus = 1.0;
}

// Parameterized constructor for SalaryWorker
SalaryWorker::SalaryWorker(string firstName, string lastName, double salary, double bonus) : Employee(firstName, lastName) {
	this->salary = salary;
	this->bonus = bonus;
}

// Setter method for salary
void SalaryWorker::setSalary(double salary) {
	this->salary = salary;
}

// Setter method for bonus
void SalaryWorker::setBonus(double bonus) {
	this->bonus = bonus;
}

// Getter method for salary
double SalaryWorker::getSalary() {
	return salary;
}

// Getter method for bonus
double SalaryWorker::getBonus() {
	return bonus;
}

// Calculate total salary (including bonus)
double SalaryWorker::calculateSalary() {
	return salary + bonus;
}

// Display employee information, including name, salary, and bonus
void SalaryWorker::display() {
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << calculateSalary() << ", bonus: " << getBonus();
}
