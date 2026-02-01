#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "The minimum number is: " << min(num1, num2) << endl;

    return 0;
}
