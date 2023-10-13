#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(void)
{

    unsigned seed = time(0);
    srand(seed);

    while (1)
    {
        string userOperation = "";

        cout << endl << "Welcome to Math tutor! Select the operator" << endl;
        cout << setw(5) << "1.) Addition" << endl;
        cout << setw(5) << "2.) Subtraction" << endl;
        cout << setw(5) << "3.) Multiplication" << endl;
        cout << setw(5) << "4.) Division" << endl;
        cout << setw(5) << "5.) Quit" << endl;
        cout << "Enter choice (1-5): ";
        cin >> userOperation;

        // Input validation
        if (((userOperation == "1") || (userOperation == "Addition") || (userOperation == "addition")) || ((userOperation == "2") || (userOperation == "Subtraction") || (userOperation == "subtraction")) || ((userOperation == "3") || (userOperation == "Multiplication") || (userOperation == "multiplication")) || ((userOperation == "4") || (userOperation == "Division") || (userOperation == "division")))
        {
            const int upperLimit = 50;
            const int lowerLimit = 10;
            float num1, num2, userResult, programResult;
            num1 = rand() % upperLimit + lowerLimit;
            num2 = rand() % upperLimit + lowerLimit;

            if ((userOperation == "1") || (userOperation == "Addition") || (userOperation == "addition"))
            {
                cout << "Let's practice addition" << endl;
                programResult = num1 + num2;
                cout << num1 << " + " << num2 << endl;
                cout << "Enter answer: ";
                cin >> userResult;
                if (userResult == programResult)
                {
                    cout << "Congratulations, it is the correct answer!" << endl;
                }
                else
                {
                    cout << "Incorrect answer. The correct answer is: " << programResult << endl;
                }
            }
            else if ((userOperation == "2") || (userOperation == "Subtraction") || (userOperation == "subtraction"))
            {
                cout << "Let's practice subtraction" << endl;
                programResult = num1 - num2;
                cout << num1 << " - " << num2 << endl;
                cout << "Enter answer: ";
                cin >> userResult;
                if (userResult == programResult)
                {
                    cout << "Congratulations, it is the correct answer!" << endl;
                }
                else
                {
                    cout << "Incorrect answer. The correct answer is: " << programResult << endl;
                }
            }
            else if ((userOperation == "3") || (userOperation == "Multiplication") || (userOperation == "multiplication"))
            {
                cout << "Let's practice multiplication" << endl;
                programResult = num1 * num2;
                cout << num1 << " * " << num2 << endl;
                cout << "Enter answer: ";
                cin >> userResult;
                if (userResult == programResult)
                {
                    cout << "Congratulations, it is the correct answer!" << endl;
                }
                else
                {
                    cout << "Incorrect answer. The correct answer is: " << programResult << endl;
                }
            }
            else if ((userOperation == "4") || (userOperation == "Division") || (userOperation == "division"))
            {
                cout << "Let's practice division" << endl;
                programResult = num1 / num2;
                cout << num1 << " / " << num2 << endl;
                cout << "Enter answer: ";
                cin >> userResult;
                if (userResult == programResult)
                {
                    cout << "Congratulations, it is the correct answer!" << endl;
                }
                else
                {
                    cout << "Incorrect answer. The correct answer is: " << programResult << endl;
                }
            }
        }
        else if ((userOperation == "quit") || (userOperation == "Quit"))
        {
            cout << "Thanks for playing! Bye bye..." << endl;
            break;
        }
        else
        {
            cout << "Invalid input! Choice should be from the options provided. Exiting..." << endl;
            break;
        }
    }

    return 0;
}