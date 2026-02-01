#include<iostream>
using namespace std;

int main()
{
    float MB;
    cout << "Enter the size in megabytes: ";
    cin >> MB;
    float M = MB * 1024 * 1024 * 8;
    cout << MB << " MB is equivalent to :  " << M << endl;
    return 0;
}