#include <iostream>
using namespace std;
void printtable(int a)
{
    for(int i=1; i<=10; i++)
    {
        cout << a << "x" << i << "=" << a*i << endl;
    }

}

int main()
{
    int n;
    cout<< "Enter a number:";
    cin >> n;
    printtable(n);
    return 0;
}