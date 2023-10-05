#include <iostream>
using namespace std;

int main(){
    float riseRate = 1.8;   // mm/yr
    int years = 100;
    float riseInCm = (riseRate * years)/10;
    float riseInInch = riseInCm * 0.3937;

    cout << "Rise in cm: " << riseInCm << endl;
    cout << "Rise in inches: " << riseInInch << endl;

    return 0;
}