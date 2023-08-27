#pragma once
#include "SalaryWorker.h"
class Manager :
    public SalaryWorker
{
private:
    // Private variables specific to the "Manager" class
    int clientCount;
public:
    // Default and parameterized constructors
    Manager();
    Manager(string firstName, string lastName, double salary, double bonus, int clientCount);

    // Setter and getter methods
    void setCcount(int clientCount);
    int getCcount();

    // Overriden methods to calculate the bonus and print info
    double calculateBonus() override;
    void display() override;

};

