#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    const int N_ROWS = 3;
    const int N_COLS = 7;
    float arr[N_ROWS][N_COLS];
    float userInput = 0.0;

    // User input
    for (int i = 0; i < N_ROWS; i++)
    {
        for (int j = 0; j < N_COLS; j++)
        {
            cout << "Food eaten by monkey " << i + 1 << " on day " << j + 1 << " (in lbs): ";
            cin >> userInput;
            if (userInput < 0)
            {
                cout << "Invalid input! Quantity must be a positive value. Exiting..." << endl;
                return 0;
            }
            arr[i][j] = userInput;
        }
    }

    // Report
    float averageFood = 0.0;
    for (int i = 0; i < N_ROWS; i++)
    {
        float highestFood = arr[i][0];
        float lowestFood = arr[i][0];

        for (int j = 0; j < N_COLS; j++)
        {
            averageFood += arr[i][j];

            if (arr[i][j] <= lowestFood)
            {
                lowestFood = arr[i][j];
            }

            if (arr[i][j] >= highestFood)
            {
                highestFood = arr[i][j];
            }
        }
        cout << "\nThe highest food eaten by monkey " << i + 1 << " (in lbs): " << highestFood << endl;
        cout << "The lowest food eaten by monkey " << i + 1 << " (in lbs): " << lowestFood << endl;
    }

    cout << "\nAverage amount of food eaten per day (in lbs): " << averageFood << endl;

    return 0;
}