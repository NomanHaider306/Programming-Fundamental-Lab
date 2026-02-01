#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int num){
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == num)
        {
            return true; 
            
        }
        
    } return false;
    
}
int main()
{
    int size;
    cout << "Enter the number of elements : ";
    cin >> size;
    int arr[size];
    int num; 
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        if(isAlreadyEntered(arr, size, num))
        {
            cout << "Already Printed : " << num << endl;
        }
        else {
            arr[count] =num;
            count ++;
        }
       
    } cout << "Unique Output : ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
    }
    
    
    return 0;
}
