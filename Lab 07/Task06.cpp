#include <iostream>
using namespace std;

// Function to find GCD
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);  // Use GCD to calculate LCM
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << findLCM(num1, num2);
    return 0;
}
