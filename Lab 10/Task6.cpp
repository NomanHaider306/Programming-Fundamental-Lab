#include<iostream>
using namespace std;

int main()
{
    int Array[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> Array[i];
    }
    for (int i = 0; i < 9; i++)
    { int MinIndex = i;
        for (int j = i+1; j < 10; j++)
        {
            if (Array[j] < Array[MinIndex] )
            {
              MinIndex=j; 
                
            }
           
        }
         swap(Array[i], Array[MinIndex]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << Array[i] << ",";
    }
    
    
    
    return 0;
}
