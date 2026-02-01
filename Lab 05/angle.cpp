#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double distance, angleDegrees, angleRadians, height;

    cout << "Enter the horizontal distance from the tree (in feet): ";
    cin >> distance;

    cout << "Enter the angle of elevation to the top of the tree (in degrees): ";
    cin >> angleDegrees;

    
    angleRadians = angleDegrees / 57.2958;  

    
    height = distance * tan(angleRadians);

    cout << "\nEstimated height of the tree: " << height << " feet" << endl;

    return 0;
}
