#include<iostream>
using namespace std;
int main()
{
    string Sentence;
    cout << "Enter the string ";
    getline(cin, Sentence);
    string New;
    for (int i = 0; Sentence[i] !='\0'; i++)
    {
        if (Sentence[i] == 'a'|| Sentence[i] == 'A' )
        {
            continue;
        } if (Sentence[i] == 'e' || Sentence[i] == 'E' )
        {
            continue;
        } if (Sentence[i] == 'i' || Sentence[i] == 'I' )
        {
            continue;
        } if (Sentence[i] == 'o' || Sentence[i] == 'O' )
        {
            continue;
        } if (Sentence[i] == 'u' || Sentence[i] == 'U'  )
        {
            continue;
        }
        else {New += Sentence[i];};
      
        
        
    }
    cout << New;
    return 0;
}
