#include<iostream>
#include<string>
using namespace std;

string checktitle(int age, string gender){
   string Title;
   if (age >=16 && gender == "m")
   {
    Title = "Mr.";
   }else if (age >=16 && gender == "f" )
   {
    Title = "Ms.";
   }else if (age <16 && gender == "m")
   {
    Title = "Master";
   }else if (age <16 && gender == "f")
   {
    Title = "Miss";
   }
   return Title;
   
   
   

}
int main (){
    int age;
    string gender;
    cout << "Enter age ";
    cin >> age;
    cout << "Enter gender ";
    cin >> gender;
    cout << "Your personal title is " << checktitle(age, gender);
    return 0;
}