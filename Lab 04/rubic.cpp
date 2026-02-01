#include <iostream>
using namespace std;

void howManyStickers(int n) {
    int stickers = 6 * (n * n);  
    cout << "Total stickers needed: " << stickers << endl;
}

int main() {
    int n;
    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> n;

    howManyStickers(n);

    return 0;
}
