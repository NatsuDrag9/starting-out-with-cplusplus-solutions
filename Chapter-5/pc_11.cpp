#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    const int min = 1;
    const int max = 100;

    // Seed random number with the current time
    srand((static_cast<unsigned>(time(nullptr))));

    // Generate random number
    int randomNumber = min + rand() % max;
    int guessCount = 0;

    // Run llop until the user guesses correctly
    while (1)
    {
        int userNum;
        cout << "Enter your guess: ";
        cin >> userNum;
        if (userNum < randomNumber)
        {
            cout << "Too low. Try again" << endl;
            guessCount++;
            continue;
        }
        else if (userNum > randomNumber)
        {
            cout << "Too high. Try again" << endl;
            guessCount++;
            continue;
        }
        else if (userNum == randomNumber)
        {
            cout << "Guess count: " << guessCount << endl;
            cout << "Congratulations! You figured out my number." << endl;
            break;
        }
    }

    return 0;
}