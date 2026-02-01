#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit) {
    int count = 0;

    while (number != 0) {
        int lastDigit = number % 10; // Extract the last digit
        if (lastDigit == digit)
            count++; // If it matches, increase count
        number = number / 10; // Remove last digit
    }

    return count;
}

int main() {
    int number, digit;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to check frequency: ";
    cin >> digit;

    cout << "Frequency of " << digit << " in " << number << " is " << frequencyChecker(number, digit);
    return 0;
}
