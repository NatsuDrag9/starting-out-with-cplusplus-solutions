#include <iostream>
using namespace std;

int main(void)
{
    float speed, dist = 0.0, time;

    cout << "Enter speed of the vehicle (in mph): ";
    cin >> speed;
    cout << "Enter time travalled by vehicle (in hours): ";
    cin >> time;

    // Input validation
    if((speed < 0) || (time < 0)){
        cout << "Invalid input! Either speed or time entered is negative. Exiting..." << endl;
        return 0;
    }

    for(int i = 1; i <= time; i++){
        dist = speed*i;
        cout << "Distance travelled at the end of hour " << i << ": " << dist << endl;
    }

    return 0;
}