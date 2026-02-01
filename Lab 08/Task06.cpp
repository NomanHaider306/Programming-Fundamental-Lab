#include <iostream>
using namespace std;


long long pileCubes(long long m) {
    long long sum = 0;
    long long n = 0;

    // Keep adding cubes until sum >= m
    while (sum < m) {
        n++;
        sum += n * n * n;
        if (sum == m)
            return n; // Found the exact number of cubes
    }

    return -1; // No such n exists
}


int main() {
    int m;
    cout << "Enter m ";
    cin >> m;
    cout  << pileCubes(m) << endl;      
                    
    return 0;
}