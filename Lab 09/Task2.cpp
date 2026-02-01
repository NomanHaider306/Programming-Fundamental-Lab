#include<iostream>
using namespace std;
void Reverse(string word){
    int i;
    int start= 0;
    int end =0;
    for ( i = 0; word[i] !='\0'; i++)
    {
        end = i;
    }
    while (start < end)
    {
        swap(word[start], word[end]);
        start ++;
        end --;
    }
    
    for (int j = 0; word[j] !='\0'; j++)
    {
        cout << word[j];
    }
    
    
}
int main()
{
    string word;
    cout << "Enter the word : ";
    cin >> word;
    Reverse(word);
    return 0;
}
