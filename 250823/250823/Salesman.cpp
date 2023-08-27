#include "Salesman.h"

// Default constructor 
Salesman::Salesman() {
	planPercentage = 0.0;
}
// Parameterized constructor 
Salesman::Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage) 
	: SalaryWorker(firstName, lastName, salary, bonus) {

	this->planPercentage = planPercentage;
}
// Setter and getter methods
void Salesman::setPlanP(double planPercentage) {
	this->planPercentage = planPercentage;
}
double Salesman::getPlanP() {
	return planPercentage;
}
// Overriden methods to calculate the bonus and print info
double Salesman::calculateBonus()  {
	double bonus = (getBonus() * planPercentage) / 100.0;
	setBonus(bonus);
	return bonus;
}
void Salesman::display() {
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "salary: "<< getSalary() << ", bonus: " << calculateBonus() 
		<< ", plan percentage: " << getPlanP() << ", month salary: " << calculateSalary() << endl;
}
