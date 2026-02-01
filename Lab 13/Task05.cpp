#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void saveToFile(string names[], int ad[], float per[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::out);

    for (int i = 0; i < count; i++)
    {
        file << names[i] << endl;
        file << ad[i] << endl;
        file << per[i] << endl;
    }

    file.close();
}

void getStudentDetails(string names[], int ad[], float per[],
                       int size, int &count, string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    while (file >> names[count] >> ad[count] >> per[count])
    {
        if (per[count] > 70)
            count++;
    }

    file.close();
}

main()
{
    string names[50];
    int ad[50], count = 0;
    float per[50];

    getStudentDetails(names, ad, per, 50, count, "Task5.txt");
    saveToFile(names, ad, per, count, "topperStudents.txt");

    cout << "Topper students saved!";
}
