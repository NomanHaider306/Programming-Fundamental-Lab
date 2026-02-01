#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int calculateFrequency(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    char target;
    file >> target;
    target = tolower(target);

    char ch;
    int count = 0;

    while (file.get(ch))
    {
        if (tolower(ch) == target)
        {
            count++;
        }
    }

    file.close();
    return count;
}

main()
{
    cout << "Frequency: " << calculateFrequency("Task3.txt");
}
