#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void saveToFile(string names[], int ages[], float matric[],
                float fsc[], float ecat[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::out);

    for (int i = 0; i < count; i++)
    {
        file << "Name : " <<  names[i] << endl;
        file <<"Age : " <<ages[i] << endl;
        file <<"Matric : " << matric[i] << endl;
        file <<"Fsc : " << fsc[i] << endl;
        file <<"Ecat : " << ecat[i] << endl;
    }

    file.close();
}

void getStudentDetails(string names[], int ages[], float matric[],
                       float fsc[], float ecat[], int size, int &count)
{
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter Name: ";
        cin >> names[count];

        cout << "Enter Age: ";
        cin >> ages[count];

        cout << "Enter Matric Marks: ";
        cin >> matric[count];

        cout << "Enter FSc Marks: ";
        cin >> fsc[count];

        cout << "Enter Ecat Marks: ";
        cin >> ecat[count];

        count++;

        cout << "Enter more? (y/n): ";
        cin >> choice;
    }
}

main()
{
    string names[50];
    int ages[50], count = 0;
    float matric[50], fsc[50], ecat[50];

    getStudentDetails(names, ages, matric, fsc, ecat, 50, count);
    saveToFile(names, ages, matric, fsc, ecat, count, "student.txt");

    cout << "Data saved successfully!";
}
