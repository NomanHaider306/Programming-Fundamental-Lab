#include <iostream>
using namespace std;


void printName(string name) {
    while (true) {  
        cout << name << endl;
    }
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);  

    printName(name);  

    return 0;
}
