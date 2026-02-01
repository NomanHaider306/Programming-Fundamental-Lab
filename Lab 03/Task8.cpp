#include<iostream>
using namespace std;
int main ()
{
 float V, I;
 
 cout << "Enter the voltage (in volts) ";
 cin >> V;
 cout << "Enter the current (in amperes) ";
 cin >> I;
 float P = V * I;
 cout << "The power is " << P << " watts " << endl;
 return 0;

}