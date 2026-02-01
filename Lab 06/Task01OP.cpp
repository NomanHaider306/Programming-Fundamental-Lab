#include <iostream>
using namespace std;
bool isG(int n1,int n2){
    if (n1>n2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int n1,n2;
    cout << "Enter Number 1";
    cout << endl;
    cin >> n1;
    cout << "Enter Number 2";
    cout << endl;
    cin >> n2;
    cout << isG(n1,n2);
    return 0;


}

