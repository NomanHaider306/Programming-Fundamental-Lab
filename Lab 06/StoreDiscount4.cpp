#include<iostream>
using namespace std;

float Disc(string day, string month, float price){
    float payable; 
    if (day == "sunday" && (month == "october" || month =="august" || month == "march"))
    {
        payable= price * 0.9;
    }else if (day == "monday" && (month == "november" || month == "december"))
    {
        payable = price * 0.95;
    }
    

    else {
        payable= price;
    }
    return payable;
    
    
}
int main(){
    string day, month ;
    float price;
    cout << "Enter the purchase amount " ;
    cin >> price;
    cout << "Enter the purchase day ";
    cin >> day;
    cout << "Enter the purchase month ";
    cin >> month;
    cout << "The total amount after discount is " << Disc(day, month, price
    );
    return 0;
    
}