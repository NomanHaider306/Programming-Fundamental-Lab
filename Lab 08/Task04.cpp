#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i  <= n-1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int primeNumbers(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of prime numbers up to " << n << " = " << primeNumbers(n) << endl;
    return 0;
}
