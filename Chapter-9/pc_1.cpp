#include <iostream>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 18;
    int chargeAccountArr[ARRAY_LENGTH] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int userInput = 0, isNumInArray = 0;

    cout << "Enter a number (or -1 to quit): ";
    cin >> userInput;

    while (userInput != -1)
    {
        for (int i = 0; i < ARRAY_LENGTH; i++)
        {
            if (chargeAccountArr[i] == userInput)
            {
                cout << "Valid number" << endl;
                isNumInArray = 1;
                break;
            }
            isNumInArray = 0;
        }
        if(!isNumInArray){
            cout << "Invalid number" << endl;
        }
        cout << "Enter a number (or -1 to quit): ";
        cin >> userInput;
    }

    return 0;
}