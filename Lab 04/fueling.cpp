#include <iostream>
using namespace std;


void calculateFuel(float distance) {
    float fuel = distance * 10;

    
    if (fuel < 100) {
        fuel = 100;
    }

    cout << "Fuel required: " << fuel << endl;
}

int main() {
    float distance;
    cout << "Enter the distance to travel: ";
    cin >> distance;

    calculateFuel(distance);

    return 0;
}
