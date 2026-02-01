#include <iostream>
using namespace std;

int main() {
    int numbers[5];     
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        numbers[i] = i + 1;  
    }

    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }

    float average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}
