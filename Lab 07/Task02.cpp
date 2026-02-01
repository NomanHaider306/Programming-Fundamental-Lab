#include <iostream>
using namespace std;

void generateFibonacci(int length) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= length; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int length;

    cout << "Enter the length of Fibonacci series: ";
    cin >> length;

    generateFibonacci(length);
    return 0;
}
