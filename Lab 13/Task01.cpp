#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function Prototype
int countLines(string fileName);

int main()
{
    string fileName = "Task1.txt";

    int totalLines = countLines(fileName);

    if (totalLines != -1)
        cout << "Total number of lines in the file: " << totalLines << endl;

    return 0;
}

// Function Definition
int countLines(string fileName)
{
    ifstream file(fileName);
    string line;
    int count = 0;

    // Check if file opened successfully
    if (!file.is_open())
    {
        cout << "Error: Could not open the file." << endl;
        return -1;
    }

    // Read file line by line
    while (getline(file, line))
    {
        count++;
    }

    file.close();
    return count;
}
