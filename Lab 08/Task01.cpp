#include<iostream>
using namespace std;

bool Brickfit(int a, int b , int c)
{
    int x;
    int y;
    cout << "Enter the height of hole ";
    cin >> x;
    cout << "Enter the width of hole ";
    cin >> y;
     
    if ((a <= x && b <= y) || (a <= y && b<= x ))
    {
        return true;
    }else if ((a <= x && c <= y) || (a <= y && c <= x))
    {
        return true;
    }else if ((b <= x && c <= y) || (b <= y && c <= x))
    {
        return true;
    }else 
    return false;
    
    
    



}
int main(){
    int x;
    int y;
    int a;
    int b;
    int c;
    cout << "Enter height of brick " ;
    cin >> a;
    cout << "Enter width of brick " ;
    cin >> b;
    cout << "Enter height of brick " ;
    cin >> c;
    
    cout << Brickfit(a, b, c);
    return 0;
}