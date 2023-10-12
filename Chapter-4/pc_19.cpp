#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float startingTime, totalTime, totalTimeFractionalPart, charges, nMinutes;

    cout << "Starting time (in floating-point) format - HH:MM as HH.MM. Example: 23:05 as 23.05" << endl;
    cout << "Enter starting time (in floating-point): ";
    cin >> startingTime;
    cout << "Enter number of minutes: ";
    cin >> nMinutes;

    // Input validation
    float startingTimeFractionalPart = startingTime - static_cast<int>(startingTime);
    if(startingTimeFractionalPart > 59){
        cout << "Invlaid input! " << startingTimeFractionalPart << " must not be greater than 59. Exiting..." << endl;
        return 0;
    }
    if(startingTime > 23.59){
        cout << "Invalid input! " << startingTime << " must not be greater than 23:59. Exiting..." << endl;
        return 0;
    }

    // Calculating charges
    if((startingTimeFractionalPart*100 + nMinutes) > 59){
        totalTimeFractionalPart = startingTimeFractionalPart*100 + nMinutes - 60;
        totalTime = static_cast<int>(startingTime) + 1 + totalTimeFractionalPart/100.0;
    }
    else {
        totalTime = startingTime + nMinutes;
    }

    if((totalTime >= 0.00) && (totalTime <= 6.59)){
        charges = nMinutes*0.12;
    }
    else if ((totalTime >= 7.00) && (totalTime <= 19.00)){
        charges = nMinutes*0.55;
    }
    else if ((totalTime >= 19.01) && (totalTime <= 23.59)){
        charges = nMinutes*0.35;
    }

    
    cout << "Charges: $" << charges << endl;

    return 0;
}