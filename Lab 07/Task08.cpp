#include <iostream>
#include <iomanip>
using namespace std;

void calculateMoney(int age, float washerPrice, int toyPrice) {
    float moneySaved = 0;
    int toyCount = 0;
    float moneyGift = 10;

    for (int birthday = 1; birthday <= age; birthday++) {
        if (birthday % 2 == 0) {
            moneySaved += moneyGift - 1; // Brother takes 1 USD
            moneyGift += 10;             // Next even birthday money increases by 10
        } 
        else {
            toyCount++; // Odd birthdays → gets a toy
        }
    }

    moneySaved += toyCount * toyPrice; // Sell all toys

    cout << fixed << setprecision(2);
    if (moneySaved >= washerPrice) {
        cout << "Yes! " << (moneySaved - washerPrice);
    } else {
        cout << "No! " << (washerPrice - moneySaved);
    }
}

int main() {
    int age, toyPrice;
    float washerPrice;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter price of the washing machine: ";
    cin >> washerPrice;

    cout << "Enter unit price of each toy: ";
    cin >> toyPrice;

    calculateMoney(age, washerPrice, toyPrice);
    return 0;
}
