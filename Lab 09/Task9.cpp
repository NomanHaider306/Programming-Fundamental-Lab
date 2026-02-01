#include<iostream>
using namespace std;
bool canPayWithChange(double arr[], double totalDue){

arr[0]= arr[0]* 0.25;
arr[1]= arr[1]*0.10;
arr[2]= arr[2]*0.05;
arr[3]=arr[3]*0.01;
double sum = arr[1] + arr[2] +arr[3] + arr[0];
if (sum >= totalDue)
{
    return true;
}else {
    return false;
}



}
int main()
{
    double arr[4];
    double totalDue;
    cout << "Enter quarters : ";
    cin >> arr[0];
    cout << "Enter dimes : ";
    cin >> arr[1];
    cout << "Enter nickel : ";
    cin >> arr[2];
    cout << "Enter penny : ";
    cin >> arr[3];
    cout << "Enter the amount due : ";
    cin >> totalDue;
    if (canPayWithChange(arr, totalDue))
    {
        cout << "Can you pay with change : " << "Yes ";
    }else {
        cout << "Can you pay with change : " << "NO";
    }
    
    return 0;
}
