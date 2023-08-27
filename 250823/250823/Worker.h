#pragma once
#include "Employee.h"

class Worker : public Employee
{
private:
    // Private variables specific to the "Worker" class
    double hoursNumber;    
    double hourlyRate;     

public:
    // Default and parameterized constructors
    Worker();    
    Worker(string firstName, string lastName, double hoursNumber, double hourlyRate);

    // Setter methods
    void setHoursNumber(double hoursNumber);
    void setHourlyRate(double hourlyRate);

    // Getter methods
    double getHoursNumber();
    double getHourlyRate();

    // Overridden method to calculate the salary and display the details 
    double calculateSalary() override;
    void display() override;
};
