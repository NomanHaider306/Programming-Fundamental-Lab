#include<iostream>
using namespace std;
void jazzifyChords(string chord[], int size){
    
    for (int i = 0; i < size; i++)
    {
        
    int j =0;
    
    while (chord[i][j]!= '\0')
    {
        j++;

    }
    if (chord[i][j-1]=='7')
    {
        cout << chord[i] << ",";
    }else{
        chord[i]+="7";
        cout << chord[i] << ",";
    }
     
}
    
} 
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    string chord[size];
    for (int i = 0; i < size; i++)
    {
        cin >> chord[i];
    }
    
    jazzifyChords(chord, size);
    
    return 0;
}
