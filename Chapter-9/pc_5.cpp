#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct SnowConditions
{
    float snowDepth;
    int date;

    SnowConditions(int d = 0, float h = 1.0)
    {
        snowDepth = h;
        date = d;
    }
};

// Function prototypes
void get_data(SnowConditions arr[], int size);
void sort_data(SnowConditions arr[], int size);
void display_data(SnowConditions arr[], int size);

/**
 * @brief Gets snowDepth data from user
 *
 * @param arr - array of type SnowConditions to store the inputs from user
 * @param size - length of the array
 */
void get_data(SnowConditions arr[], int size)
{
    int date;
    float depth;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter date: ";
        cin >> date;
        if (date < 0)
        {
            cout << "Invalid input! Date must be a positive number. Exiting..." << endl;
            exit(0);
        }
        cout << "Enter snow depth (in inch): ";
        cin >> depth;
        if (depth < 0)
        {
            cout << "Invalid input! Snow depth amount must be a positive value. Exiting..." << endl;
            exit(0);
        }
        arr[i].date = date;
        arr[i].snowDepth = depth;
    }
}

/**
 * @brief - Sorts the received array in ascending order of snow depth.
 * Sorting algorithm used: bubble sort
 *
 * @param arr - array of type SnowConditions
 * @param size - length of the array
 */
void sort_data(SnowConditions arr[], int size)
{
    SnowConditions temp; // Temporary variable used for swapping
    int swapped = 0;     // Swap flag
    do
    {
        swapped = 0;
        for (int i = 0; i < size - 1; i++)
        {
            // Swapping
            if (arr[i].snowDepth > arr[i + 1].snowDepth)
            {
                // Swapping snowDepth
                temp.snowDepth = arr[i + 1].snowDepth;
                arr[i + 1].snowDepth = arr[i].snowDepth;
                arr[i].snowDepth = temp.snowDepth;

                // Swapping date
                temp.date = arr[i + 1].date;
                arr[i + 1].date = arr[i].date;
                arr[i].date = temp.date;

                // Setting swap flag
                swapped = 1;
            }
        }
    } while (swapped);
}

/**
 * @brief - Displays sorted array in ascending order of snowDepth amount
 *
 * @param arr - array of type SnowConditions
 * @param size - length of the array
 */
void display_data(SnowConditions arr[], int size)
{
    cout << "\n Snow depth report" << endl;
    cout << setw(2) << "Date" << setw(7) << "Snow" << " depth (in inch)" << fixed << setprecision(2) << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(2) << arr[i].date << setw(12) << arr[i].snowDepth << endl;
    }
}

int main(void)
{
    const int ARRAY_LENGTH = 7;
    SnowConditions weekSnow[ARRAY_LENGTH];
    cout << "This program displays the snow depth and the corresponding date in ascending order.\n"
         << endl;

    get_data(weekSnow, ARRAY_LENGTH);
    sort_data(weekSnow, ARRAY_LENGTH);
    display_data(weekSnow, ARRAY_LENGTH);

    return 0;
}