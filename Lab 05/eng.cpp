#include <iostream>

using namespace std;


string numberToWords(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                     "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                     "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num <= 0 || num > 99)
        return "Out of range! Please enter a number between 1 and 99.";

    if (num < 20)
        return ones[num];
    else {
        int ten = num / 10;
        int one = num % 10;
        if (one == 0)
            return tens[ten];  //40
        else
            return tens[ten] + " " + ones[one]; //string concatenation 
    }
}

int main() {
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;

    cout << "In words: " << numberToWords(number) << endl;

    return 0;
}
