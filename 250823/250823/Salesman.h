#pragma once
#include "SalaryWorker.h"
class Salesman :
    public SalaryWorker
{
private:
    // Private variables specific to the "Salesman" class
    double planPercentage;
public:
    // Default and parameterized constructors
    Salesman();
    Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage);

    //Setter and getter methods
    void setPlanP(double planPercentage);
    double getPlanP();

    // Overriden methods to calculate the bonus and print info
    double calculateBonus() override;
    void display() override;

};

