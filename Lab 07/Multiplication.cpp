#include<iostream>
using namespace std;
void Multiply(int n){
    for (int i = 1; i <=10; i++)
    {
        cout << n << "x" << i << " = " << n*i << endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    Multiply(n);
    return 0;
    }
    
