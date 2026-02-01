#include <iostream>
#include <iomanip>
using namespace std;

void calculatePrice(float money, int year) {
    int age = 18; // Ivan's age in 1800

    for (int currentYear = 1800; currentYear <= year; currentYear++) {
        if (currentYear % 2 == 0) {
            money -= 12000; // Even year expense
        } else {
            money -= 12000 + 50 * age; // Odd year expense depends on his age
        }
        age++;
    }

    cout << fixed << setprecision(2);

    if (money >= 0)
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left.";
    else
        cout << "No! He will need " << (-money) << " dollars more.";
}

int main() {
    float money;
    int year;

    cout << "Enter inherited money: ";
    cin >> money;

    cout << "Enter the year until which he has to live: ";
    cin >> year;

    calculatePrice(money, year);
    return 0;
}
