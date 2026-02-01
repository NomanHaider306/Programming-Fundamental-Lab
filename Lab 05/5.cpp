#include <iostream>
using namespace std;


string OddishOrEvenish(int number) {
    int sum = 0, digit;

    
    while (number > 0) {
        digit = number % 10;   //5
        sum += digit;          //5
        number /= 10;         // 1234
    }

    
    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}

int main() {
    int num;

    cout << "Enter a five-digit number: ";
    cin >> num;

    if (num < 10000 || num > 99999) {
        cout << "Please enter a valid five-digit number." << endl;
    } else {
        cout << "The number is: " << OddishOrEvenish(num) << endl;
    }

    return 0;
}
