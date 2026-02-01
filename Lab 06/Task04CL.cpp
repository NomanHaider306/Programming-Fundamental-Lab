#include <iostream>
using namespace std;
int Greatest(int n1, int n2 , int n3){
    if (n1 > n2 && n1 > n3 )
    {
        return n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        return n2;
    }
    else if (n3 > n1 && n3 > n2)
    {
        return n3;
    }
    else {
        cout << "They are Equal.";
        return 0;
    }

}
int main()
{
    int n1 ,n2 ,n3;
    cout << "Enter Number 1 :";
    cin >> n1;
    cout << endl;
    cout << "Enter Number 2 :";
    cin >> n2;
    cout << endl;
    cout << "Enter Number 3 :";
    cin >> n3;
    cout << endl;
    cout << " The Greater of " << n1 << ", " << n2 <<", " << n3 <<" :" << Greatest(n1,n2,n3);
    
return 0;
}
