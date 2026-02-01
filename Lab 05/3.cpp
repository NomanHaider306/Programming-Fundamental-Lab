#include <iostream>
using namespace std;


bool isSymmetrical(int number) {
    int hundreds = number / 100;   //6

    int ones = number % 10;        //6    

    if(hundreds==ones) return true;
    else return false;
}

int main() {
    int num;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Please enter a valid 3-digit number." << endl;
    } 
    else if (isSymmetrical(num)) {
        cout << "The number is symmetrical (True)." << endl;
    } 
    else {
        cout << "The number is not symmetrical (False)." << endl;
    }

    return 0;
}
