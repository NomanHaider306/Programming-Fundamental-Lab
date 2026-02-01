#include <iostream>
using namespace std;

void evenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    evenOrOdd(number);

    return 0;
}
