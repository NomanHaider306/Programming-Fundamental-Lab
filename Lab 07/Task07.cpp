#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    int number;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    cout << "Enter " << n << " numbers (each between 1 and 1000):" << endl;

    for (int i = 0; i < n; i++) {
        cin >> number;

        if (number < 200)
            count1++;
        else if (number < 400)
            count2++;
        else if (number < 600)
            count3++;
        else if (number < 800)
            count4++;
        else
            count5++;
    }

    float p1 = (count1 * 100.0) / n;
    float p2 = (count2 * 100.0) / n;
    float p3 = (count3 * 100.0) / n;
    float p4 = (count4 * 100.0) / n;
    float p5 = (count5 * 100.0) / n;

    cout << "\nPercentage of numbers under 200: " << p1 << "%" << endl;
    cout << "Percentage of numbers from 200 to 399: " << p2 << "%" << endl;
    cout << "Percentage of numbers from 400 to 599: " << p3 << "%" << endl;
    cout << "Percentage of numbers from 600 to 799: " << p4 << "%" << endl;
    cout << "Percentage of numbers 800 and above: " << p5 << "%" << endl;
    return 0;
}
