#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countCharacters(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    int count = 0;
    char ch;

    while (file.get(ch))
    {
        if ( ch == '.' || ch == ',')
        {
            continue;
        }
        
        count++;
    }

    file.close();
    return count;
}

main()
{
    cout << "Total Characters: " << countCharacters("Task2.txt");
}
