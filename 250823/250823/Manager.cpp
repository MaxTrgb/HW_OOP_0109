#include "Manager.h"  

// Default constructor for Manager
Manager::Manager() {
	clientCount = 1;
}

// Parameterized constructor for Manager
Manager::Manager(string firstName, string lastName, double salary, double bonus, int clientCount) : SalaryWorker(firstName, lastName, salary, bonus) {
	this->clientCount = clientCount;
}

// Setter method for clientCount
void Manager::setCcount(int clientCount) {
	this->clientCount = clientCount;
}

// Getter method for clientCount
int Manager::getCcount() {
	return clientCount;
}

// Calculate bonus for the manager based on the bonus amount
double Manager::calculateBonus() {
	double mBonus;
	if (getBonus() < 100) {
		return mBonus = getBonus();
	}
	else if (getBonus() >= 100 && getBonus() < 200) {
		return mBonus = getBonus() * 2;
	}
	else if (getBonus() >= 200) {
		return mBonus = getBonus() * 3;
	}
}

// Display manager's information, including name, salary, bonus, client count, and calculated salary
void Manager::display() {
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus()
		<< ", client count: " << getCcount() << ", month salary: " << calculateSalary() << endl;
}
