#include <iostream>
using namespace std;

int main()
{
    string text;
    char ch;
    bool found = false;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter a character to search: ";
    cin >> ch;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ch)
        {
            found = true;
            break; 
        }
    }

    if(found)
        cout << "Character is present in the string.";
    else
        cout << "Character is NOT present in the string.";
        return 0;
}
