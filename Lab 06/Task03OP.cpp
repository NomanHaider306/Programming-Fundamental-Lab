#include <iostream>
using namespace std;
float Perimeter(char choice,float side){
   float res;
    if (choice=='s' || choice == 'S')
    {
        res= 4 * side;
    }
    else if (choice=='c' || choice == 'C')
    {
        res= 6.28 * side;
    }
    
    else if (choice=='t' || choice == 'T')
    {
        res= 3 * side;
    }
    else if (choice=='h' || choice == 'H')
    {
        res= 6 * side;
    }
    else {
        cout << "Wrong Choice ";
    }

    return res;
    
}
int main()
{
    char choice;
    float val;
    cout << "Enter shape (s for square, c for circle , t for triangle , h for hexagon)";
    cout << endl;
    cin >> choice;
    cout << "Enter value :";
    cout << endl;
    cin >> val;
    cout << "The perimeter is :" << Perimeter(choice,val);
   return 0;


}
