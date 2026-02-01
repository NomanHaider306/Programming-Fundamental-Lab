#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\n1st Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[4] << endl;
    return 0;
}
