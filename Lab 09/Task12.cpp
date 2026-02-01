#include<iostream>
using namespace std;
bool isSpecialArray(int arr[], int size){
    bool isEven = true;
    bool isOdd= true;
    for (int i = 0; i < size; i+=2)
    {
       
    
        if (arr[i] % 2 != 0)
        {
            return false;
        
        
    } 
    }for (int i = 1; i < size; i+=2)
    {
     if (arr[i] % 2 == 0)
     {
        return false;
     }
        
    } if (isEven == true && isOdd == true)
    {
        return true;
    }else 
    return false;
    
    
    
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (isSpecialArray(arr, size))
    {
        cout << "The array is Special ";
    }else {
        cout << "The array is not special";
    }
    
    return 0;
}
