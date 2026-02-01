#include<iostream>
using namespace std;
void Reverse(int arr[], int length){
 for (int i = length-1; i >=0; i--)
 {
    cout << arr[i] << " ";
 }
 
}
int main()
{
    int length;
    cout << "Enter the number of elements : ";
    cin >> length;
    if (length < 0)
    {
        cout << "Invalid";
    }
    
    
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr, length);
       
    return 0;
}
