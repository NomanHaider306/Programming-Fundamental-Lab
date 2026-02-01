#include<iostream>
using namespace std;

float lowestprice(int distance, string time ){
    float price;
    if (distance < 20 && time == "day" )
    {
        price = (distance * 0.79) + 0.7;
    }else if (distance < 20 && time == "night")
    {
        price = (distance * 0.9) + 0.7;
    }else if (distance >=20 && distance <100)
    {
       price = distance * 0.09;
    }else if (distance >= 100)
    {
        price = distance * 0.06;

    }
    return price;
    
       
}
int main (){
    int distance;
    string time;
    cout << "Enter the distance in KM ";
    cin >> distance;
    cout << "Enter the time day/night ";
    cin >> time;
    cout << lowestprice(distance, time);
    return 0;

}