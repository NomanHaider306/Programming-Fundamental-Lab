#include<iostream>
using namespace std;

int main()
{
    int boxcount;
    cout << "Enter the number of boxes : ";
    cin >> boxcount;
    int size= boxcount *3;
    int Arraybox[size];
    int TotalVolume = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> Arraybox[i];
    }
    for (int i = 0; i < size; i+=3)
    {
        TotalVolume += Arraybox[i] * Arraybox[i+1] * Arraybox[i+2];
    }
    
    cout << "The Total volume of the boxes is : " << TotalVolume ;
    return 0;
}
