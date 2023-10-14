#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

int get_num_accidents(string regionName);
void find_lowest(int total1, int total2, int total3, int total4, int total5);

/**
 * @brief Gets the num accidents for the specific geographic region from the user, validates it and returns it
 *
 * @param regionName
 * @return int - returns the number of accidents
 */
int get_num_accidents(string regionName)
{
    int numAccidents;
    cout << "Enter the number of accidents in " << regionName << ": ";
    cin >> numAccidents;
    if (numAccidents < 0)
    {
        cout << "Invalid input! Number of accidents in a regions must be a positive number. Exiting..." << endl;
        exit(0);
    }
    return numAccidents;
}

/**
 * @brief Determines the regions with the lowest number of accidents. It then prints the name of that region along with its accident figure. If the number of accidents are same for any two regions, it prints the first region's name.
 *
 * @param total1
 * @param total2
 * @param total3
 * @param total4
 * @param total5
 */
void find_lowest(int total1, int total2, int total3, int total4, int total5)
{
    if ((total1 <= total2) && (total1 <= total3) && (total1 <= total4) && (total1 <= total5))
    {
        cout << "North region has the lowest number of accidents: " << total1 << endl;
    }
    else if ((total2 <= total1) && (total2 <= total3) && (total2 <= total4) && (total2 <= total5))
    {
        cout << "South region has the lowest number of accidents: " << total2 << endl;
    }
    else if ((total3 <= total1) && (total3 <= total2) && (total3 <= total4) && (total3 <= total5))
    {
        cout << "East region has the lowest number of accidents: " << total3 << endl;
    }
    else if ((total4 <= total1) && (total4 <= total2) && (total1 <= total3) && (total1 <= total5))
    {
        cout << "West region has the lowest number of accidents: " << total4 << endl;
    }
    else if ((total5 <= total1) && (total5 <= total2) && (total5 <= total3) && (total5 <= total4))
    {
        cout << "Central region has the lowest number of accidents: " << total5 << endl;
    }
}

int main(void)
{
    int northTotal = get_num_accidents("North");
    int southTotal = get_num_accidents("South");
    int eastTotal = get_num_accidents("East");
    int westTotal = get_num_accidents("West");
    int centralTotal = get_num_accidents("Central");

    find_lowest(northTotal, southTotal, eastTotal, westTotal, centralTotal);
    return 0;
}