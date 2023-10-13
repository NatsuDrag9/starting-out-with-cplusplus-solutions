#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float mph;

    cout << setw(2) << "Speed (kmph)" << setw(15) << "Speed (mph)" << endl;
    for(float speedKmph = 60; speedKmph <= 130; speedKmph += 5){
        mph = speedKmph*0.6214;
        if(speedKmph/10 < 10){
            cout << setw(2) << speedKmph << setw(18) << fixed << setprecision(2) << mph << endl;
        }
        else {
            cout << setw(2) << speedKmph << setw(17) << fixed << setprecision(2) << mph << endl;
        }
    }

    return 0;
}