#include<iostream>
using namespace std;
 void Shift(char word[]){
    for (int i = 0; word[i]!= '\0'; i++)
    {
       if (word[i] >='a'&& word[i] <='z')
       {
       if (word[i] == 'z')
       {
        word[i] = 'a';
       }else {
        word[i]= word[i] + 1;
       }
       
       }else if (word[i] >= 'A' && word[i] <= 'Z')
       {
        if (word[i] == 'Z')
        {
           word[i] ='A';
        }else{
            word[i] = word[i] + 1;
        }
        
       }
       if (word[i] == ' ')
       {
         word[i] = word[i];
       }
       
       
       
    }
    
 }
 int main()
 {
    char word[100];
    cout << "Enter the Word : ";
    cin.getline(word, 100);
     Shift(word);
     cout << word;
    return 0;
 }
 