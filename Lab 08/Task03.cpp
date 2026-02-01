#include<iostream>
using namespace std;
void plant(string seed, int fert, int temp, int water){
    string PlantShape;
    if (seed == "@" && (temp >=25 || temp <=30 ))

    {
    for (int i = 1; i <= water; i++)
    {
        for (int k = 1; k <=water; k++)
       {
         cout << "-";
    } for (int j = 1; j <= fert; j++)
       {
        
        cout << "@";
       }
    }
    
        
    
       
       
       
    }else if (seed == "#" && (temp >=25 || temp <=30 ))
    {
        for (int i = 1; i <= water; i++)
    {
        for (int k = 1; k <=water; k++)
       {
         cout << "-";
    } for (int j = 1; j <= fert; j++)
       {
        
        cout << "#";
       }
    }
    
    
    
} 
else 
cout << "Invalid";
}
int main(){
    string seed;
    int fert, temp, water;
    cout << "Enter water units ";
    cin >> water;
    cout << "Enter Fertilizer units ";
    cin >> fert;
    cout << "Enter Temperature ";
    cin >> temp;
    cout << "Enter Seed type ";
    cin >> seed;
    plant(seed, fert, temp, water);
}