#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void displayWords(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    string word;
    while (file >> word)
    {
        if (word.length() < 4)
            cout << word << endl;
    }

    file.close();
}

main()
{
    displayWords("Task7.txt");
}
