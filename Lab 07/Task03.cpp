#include <iostream>
using namespace std;

int totalDigits(int number) {
    int count = 0;

    if (number == 0)
        return 1; // Special case: 0 has 1 digit

    while (number != 0) {
        number = number / 10; // Remove last digit
        count++;               // Increase digit count
    }

    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Total digits: " << totalDigits(num);
    return 0;
}
