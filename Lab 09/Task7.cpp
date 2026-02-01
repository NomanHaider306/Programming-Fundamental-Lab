#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size) {
    double Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += resistance[i];
    }
    return Sum;
}
int main()
{
    int size;
    cout << "Enter the number of resistors : ";
    cin >> size;
    double resistance[size];
    for (int i = 0; i < size; i++)
    {
        cin >> resistance[i];
    }
    cout << "The total Resistance is " << calculateTotalResistance(resistance, size) << " ohms";
    return 0;
}
