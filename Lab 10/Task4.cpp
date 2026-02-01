#include<iostream>
using namespace std;

int Array[100];
int length;
bool isRepeatingCycle(int n){
    if (n > length)
    {
        return true;
    }
    for (int i = 0; i < length; i++)
    {
        if (Array[i] != Array[i % n])
        {
            return false;
        }
        
    }
    return true;
    
  
   
    

}


int main()
{
    
    cout << "Enter the size of the array : ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> Array[i];
    }
    
    int n;
    cout << "Enter the cyclecount";
    cin >> n;
    cout << isRepeatingCycle(n);
    
    
    return 0;
}
