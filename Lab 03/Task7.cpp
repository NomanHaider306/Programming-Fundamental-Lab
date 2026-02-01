#include <iostream>
using namespace std;

int main()
{
    int hrs;
    cout << "Enter the number of hours : ";
    cin >> hrs;
    int Sec = hrs * 60 * 60;
    cout << hrs <<  " hrs is equivalent to " << Sec << endl;
    return 0;
    
}