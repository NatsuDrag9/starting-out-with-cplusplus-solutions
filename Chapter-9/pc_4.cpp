#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct MonthlyRainfall
{
    float rainfall;
    string monthName;

    MonthlyRainfall(string str = "January", float rain = 20.00)
    {
        rainfall = rain;
        monthName = str;
    }
};

// Function prototypes
void get_data(MonthlyRainfall arr[], int size);
void sort_data(MonthlyRainfall arr[], int size);
void display_data(MonthlyRainfall arr[], int size);

/**
 * @brief Gets rainfall data from user
 *
 * @param size - number of months in a year is the array length
 * @param arr - array of type MonthlyRainfall to store the inputs from user
 */
void get_data(MonthlyRainfall arr[], int size)
{
    string str;
    float data;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter month name: ";
        cin >> str;
        if ((str == "January") || (str == "February") || (str == "March") || (str == "April") || (str == "May") || (str == "June") || (str == "July") || (str == "August") || (str == "September") || (str == "October") || (str == "November") || (str == "December"))
        {
            arr[i].monthName = str;
        }
        else
        {
            cout << "Invalid input! Month name should be January, February, March, April, May, June, July, August, September, October, November, December. Exiting..." << endl;
            exit(0);
        }
        cout << "Enter rainfall data (in inch): ";
        cin >> data;
        if (data < 0)
        {
            cout << "Invalid input! Rainfall amount must be a positive value. Exiting..." << endl;
            exit(0);
        }
        arr[i].rainfall = data;
    }
}

/**
 * @brief - Sorts the received array in descending order of monthly rainfall amount.
 * Sorting algorithm used: bubble sort
 *
 * @param arr - array of type MonthlyRainfall
 * @param size - length of the array
 */
void sort_data(MonthlyRainfall arr[], int size)
{
    MonthlyRainfall temp; // Temporary variable used for swapping
    int swapped = 0;      // Swap flag
    do
    {
        swapped = 0;
        for (int i = 0; i < size - 1; i++)
        {
            // Swapping
            if (arr[i].rainfall < arr[i + 1].rainfall)
            {
                // Swapping rainfall
                temp.rainfall = arr[i + 1].rainfall;
                arr[i + 1].rainfall = arr[i].rainfall;
                arr[i].rainfall = temp.rainfall;

                // Swapping month name
                temp.monthName = arr[i + 1].monthName;
                arr[i + 1].monthName = arr[i].monthName;
                arr[i].monthName = temp.monthName;

                // Setting swap flag
                swapped = 1;
            }
        }
    } while (swapped);
}

/**
 * @brief - Displays sorted array in descending order of monthly rainfall amount
 *
 * @param arr - array of type MonthlyRainfall
 * @param size - length of the array
 */
void display_data(MonthlyRainfall arr[], int size)
{
    cout << "\nMonthly rainfall data sorted in order from highest to lowest" << fixed << setprecision(2) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Month name: " << arr[i].monthName << endl;
        cout << "Rainfall (in inch): " << arr[i].rainfall << endl;
    }
}

int main(void)
{
    const int ARRAY_LENGTH = 12;
    MonthlyRainfall months[ARRAY_LENGTH];
    cout << "This program displays the monthly rainfall data and the corresponding name of the month in descending order.\n"
         << endl;

    get_data(months, ARRAY_LENGTH);
    sort_data(months, ARRAY_LENGTH);
    display_data(months, ARRAY_LENGTH);

    return 0;
}