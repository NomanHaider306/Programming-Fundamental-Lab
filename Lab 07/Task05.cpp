#include <iostream>
using namespace std;

int digitSum(int number) {
    int sum = 0;

    // Convert negative numbers to positive
    if (number < 0)
        number = -number;

    while (number != 0) {
        int lastDigit = number % 10; // Get the last digit
        sum = sum + lastDigit;       // Add it to the sum
        number = number / 10;        // Remove last digit
    }

    return sum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits: " << digitSum(num);
    return 0;
}
