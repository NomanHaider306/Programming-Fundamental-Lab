#include<iostream>
using namespace std;
void Position(string word ){
    for (int i = 0; word[i] !='\0'; i++)
    {
        cout << word[i] << " found at " << i << " position"<< endl;
    }
    
}
int main()
{
    string word;
    cout << "Enter a word : ";
    cin >> word;
    Position(word);


    
    return 0;
}
