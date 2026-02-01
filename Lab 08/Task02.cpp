#include<iostream>
using namespace std;

float calculateDamage(string type, string optype, float Attpower, float Defpower ){
    float damage;
   if (type == "fire" && optype == "grass")
   {
     damage = (50 * (Attpower/Defpower)) *2;
   }else if (type == "fire" && optype == "water")
   {
     damage = (50 * (Attpower/Defpower)) * 0.5;
   }else if (type == "fire" && optype == "electric")
   {
     damage = (50 * (Attpower/Defpower)) *1;
   }else if (type == "water" && optype == "electric")
   {
     damage = (50 * (Attpower/Defpower)) *0.5;
   }else if (type == "water" && optype == "grass")
   {
     damage = (50 * (Attpower/Defpower)) *0.5;
   }else if (type == "grass" && optype == "electric")
   {
     damage = (50 * (Attpower/Defpower)) *1;
   }
   return damage;
   
   
   
   
   
   
    

}
int main(){
    float Attpower, Defpower;
    string type, optype;
    cout << "Enter Attack power : ";
    cin >> Attpower;
    cout << "Enter Defence power : ";
    cin >> Defpower;
    cout << "Enter Your Type : ";
    cin >> type;
    cout << "Enter Opponent Type : ";
    cin >> optype;
    cout << "Total Damage : " << calculateDamage(type,optype, Attpower, Defpower);
    return 0;

}