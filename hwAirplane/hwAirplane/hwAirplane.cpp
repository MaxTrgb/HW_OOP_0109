#include <iostream>
#include "Airplane.h"
using namespace std;

int main() {
    Airplane plane1("Boeing 747", 400);
    Airplane plane2("Airbus A380", 500);
    Airplane plane3("Boeing 747", 450);

    cout << "Plane 1: " << plane1 << endl;
    cout << "Plane 2: " << plane2 << endl;
    cout << "Plane 3: " << plane3 << endl;

    // Comparing airplane types using a custom operator<<
    cout << "\nComparison of aircraft types:" << endl;
    cout << "Plane 1 and Plane 2: " << (plane1 == plane2 ? "Same" : "Different") << endl;
    cout << "Plane 1 and Plane 3: " << (plane1 == plane3 ? "Same" : "Different") << endl;
    cout << "Plane 2 and Plane 3: " << (plane2 == plane3 ? "Same" : "Different") << endl;

    // Comparing passenger capacity using a custom operator<<
    cout << "\nComparison of passenger capacity:" << endl;
    cout << "Plane 1 and Plane 2: " << (plane1 > plane2 ? "Plane 1 > Plane 2" : "Plane 1 <= Plane 2") << endl;
    cout << "Plane 1 and Plane 3: " << (plane1 > plane3 ? "Plane 1 > Plane 3" : "Plane 1 <= Plane 3") << endl;
    cout << "Plane 2 and Plane 3: " << (plane2 > plane3 ? "Plane 2 > Plane 3" : "Plane 2 <= Plane 3") << endl;

    // Increment and decrement operations
    ++plane1;
    --plane2;

    cout << "\nAfter incrementing and decrementing passengers:" << endl;
    cout << "Plane 1: " << plane1 << endl;
    cout << "Plane 2: " << plane2 << endl;
    cout << "Plane 3: " << plane3 << endl;

    return 0;
}
