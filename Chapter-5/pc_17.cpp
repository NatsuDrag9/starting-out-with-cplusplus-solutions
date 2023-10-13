#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int totalSuites = 120, userInput, totalOccupiedSuites = 0;
    float occupancyRate;

    for (int i = 10; i <= 16; i++)
    {
        if (i != 13)
        {
            cout << "Enter number of suites occupied on floor " << i << ": ";
            cin >> userInput;
            if ((userInput < 0) || (userInput > 20))
            {
                cout << "Invalid input! There are 20 suites on a floor so input should be between 0 and 20. Exiting..." << endl;
                return 0;
            }
            totalOccupiedSuites += userInput;
        }
        else
        {
            continue;
        }
    }

    occupancyRate = static_cast<float>(totalOccupiedSuites) / static_cast<float>(totalSuites);

    cout << "Total suites in hotel: " << totalSuites << endl;
    cout << "Total occupied suites: " << totalOccupiedSuites << endl;
    cout << "Occupancy rate (in %): " << occupancyRate*100 << endl;

    return 0;
}