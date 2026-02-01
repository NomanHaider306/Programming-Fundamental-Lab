#include<iostream>
using namespace std;

float totalincome(string type, int rows, int coloumns){
    float income;
    if (type == "premiere")
    {
        income = (rows * coloumns)*12;
    }else if (type == "normal")
    {
        income = (rows * coloumns) *7.5;
    }else if (type == "discount")
    {
        income = (rows * coloumns) * 5;
        }
    
    return income;    
    
}
int main (){
    int rows, coloumns ;
    string type;
    cout << "Enter the type of ticket ";
    cin >> type;
    cout << "Enter the no of rows ";
    cin >> rows;
    cout << "Enter the no of coloumns ";
    cin >> coloumns;
    cout << "The total Income form Tickets is : "<< totalincome(type, rows, coloumns);
    return 0;
}