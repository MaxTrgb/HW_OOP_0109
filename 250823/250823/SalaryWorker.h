#pragma once
#include "Employee.h"
class SalaryWorker :
    public Employee
{
private:
    // Private variables specific to the "SalaryWorker" class
    double salary;
    double bonus;
public:
    // Default and parameterized constructors
    SalaryWorker();
    SalaryWorker(string firstName, string lastName, double salary, double bonus);

    // Setter and getter methods
    void setSalary(double salary);
    void setBonus(double bonus);
    double getSalary();
    double getBonus();

    // Pure virtual method to calculate the bonus
    virtual double calculateBonus() = 0;

    // Overriden methods to calculate the salary and print info
    double calculateSalary() override;
    void display() override;

};

