#include <iostream>
using namespace std;


string checkAlphabetCase(char letter) {
    if (letter == 'A')
        return "You have entered Capital A";
    else if (letter == 'a')
        return "You have entered small a";
    else
        return "Invalid input! Please enter only 'A' or 'a'.";
}

int main() {
    char input;

    cout << "Enter an alphabet (A or a): ";
    cin >> input;


    cout << checkAlphabetCase(input) << endl;

    return 0;
}
