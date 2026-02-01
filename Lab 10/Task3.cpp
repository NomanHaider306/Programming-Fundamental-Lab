#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter how mane elements you want to enter : ";
    cin >> size;
   
    int arr1[size];
    int count =0;
    int arr2[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }  
    
    for (int i = 1; i < size -1; i++)
    {
        if (arr1[i] > arr1[i-1] && arr1[i] >arr1[i+1] )
        {
             arr2[count]=arr1[i];
             count++;
        }
        
    }
    if (count == 0)
    {
        cout << "No Peak Found ";
    }
    else{
    for (int i = 0; i < count; i++)
    {
      cout << arr2[i] << ",";   
    }
    }
    
    
    return 0;
}
