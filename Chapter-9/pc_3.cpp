#include <iostream>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 18;
    int winningNum[ARRAY_LENGTH] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int userInput = 0, isNumInArray = 0, first = 0, last = ARRAY_LENGTH - 1, middle = 0;

    cout << "Enter ticket number: ";
    cin >> userInput;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        middle = (first + last) / 2;
        if (winningNum[middle] == userInput)
        {
            isNumInArray = 1;
            cout << "You won the lottery!" << endl;
            break;
        }
        else if (winningNum[middle] > userInput)
        {
            first = middle + 1;
            last = ARRAY_LENGTH - 1;
        }
        else if (winningNum[middle] < userInput)
        {
            first = 0;
            last = middle - 1;
        }
        isNumInArray = 0;
    }

    if (!isNumInArray)
    {
        cout << "You lost..." << endl;
    }

    return 0;
}