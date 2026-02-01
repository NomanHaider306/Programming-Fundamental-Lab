#include<iostream>
#include<string>
using namespace std;

string checkspeed(float speed){
    string result;
    if (speed <=10)
    {
        result = "slow";

    }else if (speed >10 && speed <=50)
    {
        result = "average";
    }else if (speed >50 && speed <=150)
    {
        result = "fast";
    }else if (speed >150 && speed <=1000)
    {
        result = "ultra fast";

    }else if (speed >1000)
    {
        result = "extremely fast";
    }
    
    
    
    return result;
    
}
int main (){
    float speed;
    cout << "Enter speed ";
    cin >> speed;
    cout << checkspeed(speed);
    return 0;
}