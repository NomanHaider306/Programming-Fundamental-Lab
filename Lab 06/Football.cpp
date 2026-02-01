#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string calculatemoney(float budget, string category, int people){
    string result;
    float cp;
    
    if (people >=1 && people <=4)
    {
        budget =budget - (budget * 0.75);
         if (category == "vip")
    
        {
            cp = budget - (people * 499.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        else if (category == "normal")
        {
            cp = budget - (people *249.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        
    }else if (people > 4 && people <= 9)
    {
        budget =budget - (budget * 0.6);
         if (category == "vip")
    
        {
            cp = budget - (people  * 499.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        else if (category == "normal")
        {
            cp = budget - (people *249.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        

    }else if (people > 9 && people <=24)
    {
        budget =budget - (budget * 0.5);
         if (category == "vip")
    
        {
            cp = budget - (people *499.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        else if (category == "normal")
        {
            cp = budget - (people *249.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        
    }else if (people > 24 && people <=49)
    {
        budget =budget - (budget * 0.4);
         if (category == "vip")
    
        {
            cp = budget - (people *499.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        else if (category == "normal")
        {
            cp = budget - (people *249.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        
    }else if (people > 49)
    {
        budget =budget - (budget * 0.25);
        if (category == "vip")
    
        {
            cp = budget - (people *499.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        }
        else if (category == "normal")
        {
            cp = budget - (people *249.99);
            if (cp>=0)
        {
            result = "Yes!";
            cout << result << "you have " << cp << "left";
        }else if (cp< 0)
        {
            result = "Not enough money!";
            cout << result << "you need " << abs(cp) << "more";
        }
        
            
        }
        
    
        
    }
    
    
    
    return result;
    
 } 
 int main(){
    float budget;
    string category;
    int people;
    cout << "Enter budget ";
    cin >> budget;
    cout << "Enter category ";
    cin >> category;
    cout << "Enter No of People ";
    cin >> people;
    calculatemoney(budget, category, people);
    return 0;
    
 }