#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    
    if (number < 0) {
        cout << "Square root of a negative number is not defined in real numbers!" << endl;
    } else {
        double result = sqrt(number);  
        cout << "The square root of " << number << " is: " << result << endl;
    }

    return 0;
}
