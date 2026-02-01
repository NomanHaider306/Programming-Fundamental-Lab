#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nFirst element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;
    return 0;
}
