#pragma once 

#include <iostream>
#include <string>
using namespace std; 

class Airplane {
private:
    string aircraftType; 
    int passengers;     

public:
    // Constructor that initializes the aircraft type and initial number of passengers
    Airplane(string type, int initialPassengers);

    // Overload the equality operator (==) to compare aircraft types
    bool operator==(const Airplane& other) const;

    // Overload the prefix increment operator (++) to increase passengers
    Airplane& operator++();

    // Overload the prefix decrement operator (--) to decrease passengers
    Airplane& operator--();

    // Overload the greater-than operator (>) to compare maximum passengers
    bool operator>(const Airplane& other) const;

    // Getter function to retrieve the number of passengers
    int getPassengers() const;

    // Friend function to overload the stream insertion operator (<<) for output
    friend ostream& operator<<(ostream& os, const Airplane& airplane);
};
