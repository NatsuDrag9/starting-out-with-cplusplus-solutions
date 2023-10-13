#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int nInitial = 2, nMultiplyDays = 1;
    float avgDailyPopulationIncrease = 0.1, currentPopultion = 2.0;

    cout << "Enter starting number of organisms: ";
    cin >> nInitial;
    cout << "Enter their average daily population increase (as a % of current population): ";
    cin >> avgDailyPopulationIncrease;
    avgDailyPopulationIncrease = avgDailyPopulationIncrease / 100.0;
    cout << "Enter number of days they will multiply: ";
    cin >> nMultiplyDays;

    // Input validation
    if (nInitial < 2)
    {
        cout << "Invalid input! Starting number of organisms cannot be less than 2. Exiting..." << endl;
        return 0;
    }
    if (avgDailyPopulationIncrease < 0)
    {
        cout << "Invalid input! Average daily population increase cannot be less than 0. Exiting..." << endl;
        return 0;
    }
    if (nMultiplyDays < 1)
    {
        cout << "Invalid input! Multiplying days cannot be less than 1. Exiting..." << endl;
        return 0;
    }

    // First day
    currentPopultion = nInitial + avgDailyPopulationIncrease * 1;
    cout << "Population size after day 1: " << currentPopultion << endl;

    // Computing size of population assuming linear growth
    for (int i = 2; i <= nMultiplyDays; i++)
    {
        currentPopultion += avgDailyPopulationIncrease * i;
        cout << "Population size after day " << i << ": " << currentPopultion << endl;
    }

    return 0;
}