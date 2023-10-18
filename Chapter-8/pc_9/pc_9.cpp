#include <iostream>
#include <iomanip>
#include "./inc/Stats.h"
using namespace std;

// Prototypes
void get_data(Stats &stat);
void create_report(Stats &stat);

/**
 * @brief Gets the dash times for each of the 15 runners on a 100-yard track from the user
 *
 * @param stat - statistics object to store the dash times
 */
void get_data(Stats &stat)
{
    double userInput = 0.0;
    string name = "";
    cout << "Enter athlete name: ";
    cin >> name;
    cout << "Enter track time (in sec or -1 to quit): ";
    cin >> userInput;

    while (userInput != -1)
    {
        if (userInput < 0)
        {
            cout << "Invalid input! Track time must be a positive value." << endl;
            cout << "Enter time again (in sec or -1 to quit): ";
            cin >> userInput;
        }
        if (stat.store_value(userInput, name))
        {
            cout << "Stored successfully" << endl;
        }
        else
        {
            cout << "Failed to store value. Maximum number of entries is 15" << endl;
        }
        cout << "Enter athlete name: ";
        cin >> name;
        cout << "Enter track time (in sec or -1 to quit): ";
        cin >> userInput;
    }
}

/**
 * @brief Creates and displays the report containing track times
 *
 * @param stat - statistics object received
 */
void create_report(Stats &stat)
{
    cout << "\n         Tulsa Tigers Track Team          " << fixed << setprecision(2) << endl;
    cout << "Average 100-yard dash time (in sec): " << setw(7) << stat.get_average() << endl;
    double h = stat.get_highest();
    cout << "Slowest runner: " << stat.get_name(stat.highestIndex) << setw(7) << h << " sec" << endl;
    double l = stat.get_lowest();
    cout << "Fastest runner : " <<  stat.get_name(stat.lowestIndex) << setw(7) << l << " sec" << endl;
}

int main(void)
{
    Stats statsObject;

    get_data(statsObject);
    create_report(statsObject);

    return 0;
}