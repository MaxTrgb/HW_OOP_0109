#include "Worker.h"

// Default constructor
Worker::Worker() {
    hoursNumber = 0.0;     
    hourlyRate = 0.0;      
}

// Parameterized constructor with inheritance from Employee class
Worker::Worker(string firstName, string lastName, double hoursNumber, double hourlyRate) 
    : Employee(firstName, lastName) {
    this->hoursNumber = hoursNumber;    
    this->hourlyRate = hourlyRate;      
}

// Setter method for updating hours worked
void Worker::setHoursNumber(double hoursNumber) {
    this->hoursNumber = hoursNumber;
}

// Setter method for updating hourly rate
void Worker::setHourlyRate(double hourlyRate) {
    this->hourlyRate = hourlyRate;
}

// Getter method for retrieving hours worked
double Worker::getHoursNumber() {
    return hoursNumber;
}

// Getter method for retrieving hourly rate
double Worker::getHourlyRate() {
    return hourlyRate;
}

// Method to calculate the worker's salary
double Worker::calculateSalary() {
    double salaryWorker = 0;

    // Regular pay
    if (hoursNumber <= 40) {
        salaryWorker = hoursNumber * hourlyRate;
    }
    // Overtime pay
    else {
        double regularPay = 40 * hourlyRate;  // Calculate regular pay for 40 hours
        double overtimePay = (hoursNumber - 40) * hourlyRate * 2; // Calculate double rate for extra hours
        salaryWorker = regularPay + overtimePay;  // Add regular pay and overtime pay
    }

    return salaryWorker;
}

// Method to display worker's details
void Worker::display() {
    cout << getFirstName() << " " << getLastName() << endl;
    cout << "hours number: " << getHoursNumber() << ", hourly rate: "
        << getHourlyRate() << ", month salary: " << calculateSalary() << endl;
}
