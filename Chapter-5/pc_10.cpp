#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
    /*
   This block was commented for to prevent github actions workflow from entering into an infinite loop. Uncomment it to run the program
   */
    // const int min = 1;
    // const int max = 100;

    // // Seed random number with the current time
    // srand((static_cast<unsigned>(time(nullptr))));

    // // Generate random number
    // int randomNumber = min + rand() % max;

    // // Run loop until the user guesses correctly
    // while (1)
    // {
    //     int userNum;
    //     cout << "Enter your guess: ";
    //     cin >> userNum;
    //     if (userNum < randomNumber)
    //     {
    //         cout << "Too low. Try again" << endl;
    //         continue;
    //     }
    //     else if (userNum > randomNumber)
    //     {
    //         cout << "Too high. Try again" << endl;
    //         continue;
    //     }
    //     else if (userNum == randomNumber)
    //     {
    //         cout << "Congratulations! You figured out my number." << endl;
    //         break;
    //     }
    // }

    return 0;
}