#include <iostream>
#include <iomanip>   // for setw() and setfill()
#include <sstream>   // for stringstream
using namespace std;


string timeTravel(int hours, int minutes) {
    minutes += 15; // Add 15 minutes

    if (minutes >= 60) { 
        minutes -= 60;
        hours += 1;
    }

    if (hours >= 24) { 
        hours -= 24;
    }

    
    stringstream result;
    result << setfill('0') << setw(2) << hours << ":"
           << setfill('0') << setw(2) << minutes;

    return result.str();
}

int main() {
    int h, m;

    cout << "Enter hours (0-23): ";
    cin >> h;
    cout << "Enter minutes (0-59): ";
    cin >> m;

    
    if (h < 0 || h > 23 || m < 0 || m > 59) {
        cout << "Invalid time entered!" << endl;
    } 
    else {
        cout << "Future time after 15 minutes: " << timeTravel(h, m) << endl;
    }

    return 0;
}
