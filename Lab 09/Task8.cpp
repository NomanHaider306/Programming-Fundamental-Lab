#include<iostream>
using namespace std;
void InsertArray(int Firstarr[], int FirstSize, int SecondArray[], int SecondArraySize){
    cout << "Resulting Array : "<< "["<<Firstarr[0] << ",";
    for (int i = 0; i < SecondArraySize; i++)
    {
        cout << SecondArray[i] << ",";
    }
    cout << Firstarr[1] << "]";
    
}
int main()
{
    int Firstarr[2];
    cin >> Firstarr[0];
    cin >> Firstarr[1];
    int SecondArraySize;
    cout << "Enter the number of elements for array 2 : ";
    cin >> SecondArraySize;
    int SecondArray[SecondArraySize];
    for (int i = 0; i < SecondArraySize; i++)
    {
        cin >> SecondArray[i];
    }
    InsertArray(Firstarr, 2, SecondArray, SecondArraySize);
    
    return 0;
}
