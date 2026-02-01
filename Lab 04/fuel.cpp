#include <iostream>
using namespace std;

void calculateFuel(float distance) {
    float fuel = distance * 10;
    cout << "Fuel required: " << fuel << endl;
}

int main() {
    float distance;
    cout << "Enter the distance traveled: ";
    cin >> distance;

    calculateFuel(distance);

    return 0;
}
