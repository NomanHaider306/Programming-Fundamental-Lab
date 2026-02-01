#include <iostream>
#include <string>
using namespace std;

void calculatePayableAmount(string day, float amount) {
    float payableAmount;

    if (day == "Sunday" || day == "sunday") {
        payableAmount = amount - (amount * 0.10); // Apply 10% discount
    } else {
        payableAmount = amount; // No discount
    }

    cout << "Payable Amount: $" << payableAmount << endl;
}

int main() {
    string day;
    float amount;

    cout << "Enter the day of purchase: ";
    cin >> day;

    cout << "Enter the total purchase amount: $";
    cin >> amount;

    calculatePayableAmount(day, amount);

    return 0;
}
