#include <iostream>
using namespace std;

int main(void)
{
    const int seriesEndNumber = -99;
    int currentNum = 0, min = currentNum, max = currentNum;

    cout << "Program determines minium and maxium of a series of numbers. Enter " << seriesEndNumber << " to stop entrering." << endl;
    
    // First entry from user
    cout << "Enter number: ";
    cin >> currentNum;
    min = currentNum;
    max = currentNum;

    // When first entry from user is -99
    if (currentNum == seriesEndNumber)
    {
        cout << "End of series detected" << endl;
    }
    else
    {
        // Loop to detect min and max of series wihout storing the series
        while (1)
        {
            cout << "Enter number: ";
            cin >> currentNum;
            if(currentNum != seriesEndNumber){
                min = (currentNum <= min) ? currentNum : min;
                max = (currentNum >= max) ? currentNum : max;
            }
            else{
                break;
            }
        }
    }

    cout << "Min: " << min << " and max: " << max << endl;
    return 0;
}