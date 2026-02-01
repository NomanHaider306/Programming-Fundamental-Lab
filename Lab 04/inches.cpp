#include <iostream>
using namespace std;

void inchesToFeet(float inches) {
    float feet = inches / 12;
    cout << "Equivalent in feet: " << feet << endl;
}

int main() {
    float inches;
    cout << "Enter measurement in inches: ";
    cin >> inches;

    inchesToFeet(inches);

    return 0;
}
