#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    char target;
    file >> target;

    string line;
    int count = 0;

    while (getline(file, line))
    {
        if (line[0] != target)
            count++;
    }

    file.close();
    return count;
}

main()
{
    cout << "Lines count: " << countLines("Task6.txt");
}
