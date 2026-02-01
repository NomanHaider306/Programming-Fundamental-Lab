#include <iostream>
using namespace std;
bool Parity(int n1){
    int d1, d2, d3;
    int og = n1;
    int temp;
    d1 = n1 % 10;
    n1 = n1 / 10;
    d2 = n1 % 10;
    n1 = n1 / 10;
    d3 = n1 % 10;
    temp = d1 + d2 + d3;
    if ((og % 2 == 0 && temp % 2 == 0) || (og % 2 != 0 && temp % 2 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){

    int n1;
    cout << "Enter Three digit Number :";
    cin >> n1;
    cout << endl;
    cout << Parity(n1);
    return 0;
}

