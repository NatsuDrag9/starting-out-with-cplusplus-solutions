#include <iostream>
using namespace std;

int main(){
    float riseRate = 3.1;   // mm/yr
    int years = 20;
    float riseInCm = (riseRate * years)/10;
    float riseInInch = riseInCm * 0.3937;

    cout << "Rise in cm: " << riseInCm << endl;
    cout << "Rise in inches: " << riseInInch << endl;

    return 0;
}