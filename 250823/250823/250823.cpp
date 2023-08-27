#include <iostream>
using namespace std;
#include "Employee.h"
#include "Worker.h"
#include "SalaryWorker.h"
#include "Salesman.h"
#include "Manager.h"

int main()
{
	// Create an array of pointers to Employee objects
	Employee* employees[7];

	// Create instances of objects and store them in the group
	employees[0] = new Worker("Kate", "Jordan", 30, 10);
	employees[1] = new Worker("Jack", "Peterson", 50, 10);
	employees[2] = new Salesman("Peter", "Brown", 800, 100, 80);
	employees[3] = new Salesman("Antony", "Norton", 1000, 100, 150);
	employees[4] = new Manager("David", "Flynn", 2000, 200, 50);
	employees[5] = new Manager("Marian", "Wood",1800, 200, 120);
	employees[6] = new Manager("Brent", "Simpson",2200, 200, 250);

	// Iterate through the group array and display information for each object
	for (int i = 0; i < 7; i++)
	{
		employees[i]->display();
	}

	// Clean up memory
	for (int i = 0; i < 7; i++)
	{
		delete employees[i];
	}

	return 0;
}
