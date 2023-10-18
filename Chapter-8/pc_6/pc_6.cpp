#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main(void)
{
    int ARRAY_LENGTH = 5;
    int winningDigits[ARRAY_LENGTH];
    int player[ARRAY_LENGTH];
    int userInput = 0, matches = 0;

    // Seed the random number generator with current time
    srand(time(0));

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        // Generate a random number between 0 and 9
        winningDigits[i] = 0 + rand() % 10;

        // Ask input from user
        cout << "Enter number: ";
        cin >> userInput;
        if ((userInput < 0) || (userInput > 9))
        {
            cout << "Invalid input! Number should lie between 0 and 9. Exiting..." << endl;
            return 0;
        }
        player[i] = userInput;
    }

    // Compare
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        for (int j = 0; j < ARRAY_LENGTH; j++)
        {
            if (player[i] == winningDigits[j])
            {
                matches++;
            }
        }
    }

    // Display
    cout << "\nWinning Digits" << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << winningDigits[i] << " ";
    }
    cout << "\nPlayer Digits" << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << player[i] << " ";
    }

    cout << "\nNumber of matches: " << matches << endl;

    return 0;
}