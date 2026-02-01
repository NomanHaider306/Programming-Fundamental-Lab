#include <iostream>
using namespace std;


void calculatePayableAmount(string day, float amount) {
    float payableAmount;

    
    if (day == "Sunday" || day == "sunday") {
        payableAmount = amount - (amount * 0.10);
    } else {
        payableAmount = amount - (amount * 0.05); //5% discount on days other than sunday
    }

    cout << "Payable Amount: $" << payableAmount << endl;
}

int main() {
    string day;
    float amount;

    while (true) { 
        cout << "\nEnter the day of purchase: ";
        cin >> day;

        cout << "Enter the total purchase amount: $";
        cin >> amount;

        calculatePayableAmount(day, amount);
    }

    return 0;
}
