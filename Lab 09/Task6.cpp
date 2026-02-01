#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size){
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest =  arr[i];
        }
        
    }
    return largest;
}
int main()
{ 
    int size;
    cout << "Enter the number of elements : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The largest number is : "<<findLargestNumber(arr, size);
    
    return 0;
}
