#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float falling_distance(float t);

/**
 * @brief Determines the distance an object falls due to gravity in a specific time period. 
 * g = 9.8 m/s^2
 * 
 * @param time in seconds
 * @return float - returns the distance in meters
 */

float falling_distance(float time){
    float dist = (0.5)*9.8*pow(time, 2);
    return dist;
}

int main(void)
{
    for(int i = 1; i <= 10; i++){
        cout << "Distance after " << i << " sec (in m): " << falling_distance(i) << endl;
    }
    return 0;
}