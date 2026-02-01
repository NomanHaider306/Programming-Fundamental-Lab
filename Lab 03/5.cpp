#include <iostream>
using namespace std;

int main()
{    
   string name;
cout << "name = " << endl;
cin >> name;
cout << " name " << name << endl;
    int matric, intermediate;
    cout << "matric (out of 1100)" << endl;
    cin >> matric;
    cout << "matric (out of 1100) is" << matric << endl;
    cout << "intermediate (out of 550)" << endl;
    cin >> intermediate;
    cout << "intermediate (out of 550) is " << intermediate << endl;
    int ecat;
    cout << "ecat (out of 400)" << endl;
cin >> ecat;
cout << "ecat (out of 400) is " << ecat << endl;
float Matric = (float)matric/1100;
float Intermediate =(float) intermediate/550;
float Ecat = (float) ecat/400; 

float aggr = Ecat*50 + Intermediate*40 + Matric*10;
cout << "Your Aggregate = " << aggr << endl;
 

}
