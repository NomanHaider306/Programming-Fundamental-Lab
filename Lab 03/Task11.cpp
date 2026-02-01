#include<iostream>
using namespace std;

int main()
{
 int pop, MBD;
 cout << "The current world population : ";
 cin >> pop;
 cout << "Enter the monthly birth rate(number of births per month) ";
 cin >> MBD;
 int Decade = 120;
 int POP = (3 * Decade * MBD) + pop;
 cout << "The population in three decades will be "<< POP << endl;
 return 0;


}