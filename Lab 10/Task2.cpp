#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of word : ";
    cin >> size;
    string Words[size];
    string word;
    int count = 0;
    char In;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the word " << i+1 << " ";
        cin >> Words[i];

    } cout << "Enter the  searching word  ";
    cin >> In;
    for (int i = 0; i <size; i++)
    {
                 word = Words[i];
        
       for (int j = 0; j < word.length(); j++)
       {
         char ch = word[j];
         if (In == ch)
         {
            count ++;
         }
         
       }
       
    }
    cout << "The word " << In << " Appeared " << count << " times";
    
    return 0;
}
