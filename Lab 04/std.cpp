#include <iostream>
using namespace std;

void checkResult(int score) {
    if (score > 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

int main() {
    int score;
    cout << "Enter your test score: ";
    cin >> score;

    checkResult(score);

    return 0;
}
