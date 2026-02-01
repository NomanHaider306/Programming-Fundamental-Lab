#include<iostream>
using namespace std;

bool areSameNumber(int x, int y, int z){
    if (x == y && y == z)
    {
        return true;
    } return false;
    
}
int main(){
    int x, y , z;
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter z ";
    cin >> z;
    cout << "Are the number same = " << (areSameNumber(x, y, z) ? "Yes" : "No");
    return 0;
}