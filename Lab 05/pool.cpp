#include <iostream>
#include <iomanip>  
#include <string>
using namespace std;


string calculatePoolState(int V, int P1, int P2, float H) {
    float totalWater = (P1 + P2) * H;

    
    if (totalWater > V) {
        float overflow = totalWater - V;
        return "For " + to_string(H) + " hours, the pool overflows with " + to_string(overflow) + " liters.";
    } 
    else {
        float filledPercent = (totalWater / V) * 100;
        float p1Percent = (P1 * H / totalWater) * 100;
        float p2Percent = (P2 * H / totalWater) * 100;

       
        cout << fixed << setprecision(2);
        string result = "The pool is " + to_string(filledPercent).substr(0,5) + "% full. ";
        result += "Pipe 1: " + to_string(p1Percent).substr(0,5) + "%, ";
        result += "Pipe 2: " + to_string(p2Percent).substr(0,5) + "%.";
        return result;
    }
}

int main() {
    int V, P1, P2;
    float H;

    cout << "Enter the pool volume (V in liters): ";
    cin >> V;
    cout << "Enter flow rate of pipe 1 (P1 liters/hour): ";
    cin >> P1;
    cout << "Enter flow rate of pipe 2 (P2 liters/hour): ";
    cin >> P2;
    cout << "Enter hours (H): ";
    cin >> H;

    cout << endl << calculatePoolState(V, P1, P2, H) << endl;

    return 0;
}
