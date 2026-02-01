#include <iostream>
#include <string>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2;  i <= num - 1; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


string howBad(int n) {
    int population = 0;
    int temp = n;

    // Count number of 1s in binary representation
    while (temp > 0) {
        if (temp % 2 == 1)
            population++;
        temp /= 2;
    }

    
    string result;
    if (population % 2 == 0) // Determine if Evil or Odious
        result = "Evil";
    else
        result = "Odious";

    
    if (isPrime(population))
        result += ", Pernicious"; // Check if population is a prime number

    return result;
}


int main() {
   int n;
   cout << "Enter the Number : ";
   cin >> n;
    cout   << howBad(n)  << endl;   
    
    return 0;
}