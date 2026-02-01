#include<iostream>
using namespace std;

int main()
{
    int start=0;
    int end;
    cout << "Enter the number of word you want to enter : ";
    cin >> end;
    int length=end-1;
    string Words[end];
    for (int i = 0; i < end; i++)
    {
        cin >> Words[i];
    } 
    while (start < length)
    {
        swap(Words[start], Words[length]);
        start ++;
        length --;
    }
    for (int i = 0; i < end; i++)
    {
        cout << Words[i] << " " ;
    }
    
    
    
    
    return 0;
}


