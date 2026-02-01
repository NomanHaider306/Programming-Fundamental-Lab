#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int size;

    cout << "Enter the length of array :";
    cin >> size;
    int Array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> Array[i];
    }
    for ( int i = 1; i < size; i++)
    {
        if (Array[i] > Array[i-1])
        {
          count ++;
        }
        
    }
    
    cout << "The number of progress days are : " << count ;
    return 0;
}
