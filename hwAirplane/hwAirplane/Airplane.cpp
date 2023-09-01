#include "Airplane.h" 
using namespace std;

// Constructor for the Airplane class
Airplane::Airplane(string type, int initialPassengers) : aircraftType(type), passengers(initialPassengers) {}

// Overload the equality operator (==) to compare aircraft types
bool Airplane::operator==(const Airplane& other) const {
    return aircraftType == other.aircraftType;
}

// Overload the prefix increment operator (++) to increase passengers
Airplane& Airplane::operator++() {
    passengers++;
    return *this; // Return a reference to the updated object
}

// Overload the prefix decrement operator (--) to decrease passengers
Airplane& Airplane::operator--() {
    if (passengers > 0) {
        passengers--;
    }
    return *this; // Return a reference to the updated object
}

// Overload the greater-than operator (>) to compare maximum passengers
bool Airplane::operator>(const Airplane& other) const {
    return passengers > other.passengers;
}

// Getter function to retrieve the number of passengers
int Airplane::getPassengers() const {
    return passengers;
}

// Friend function to overload the stream insertion operator (<<) for output
ostream& operator<<(ostream& os, const Airplane& airplane) {
    os << "Aircraft Type: " << airplane.aircraftType << ", Passengers on Board: " << airplane.passengers;
    return os; // Return the output stream
}
