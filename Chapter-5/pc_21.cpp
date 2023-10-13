#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int maxPlus = 13;

    // Displays diamond pattern
    cout << "This program displays an arrow pattern. Hope you like it!" << endl;

    int i = 1, plusEndIndex = 0;
    while (i <= maxPlus / 2 + 1)
    {
        // Change start index to 1 for the middle row
        int plusStartIndex = (i == maxPlus / 4 + 1) ? 1 : maxPlus / 2 + 1;
        if (i <= maxPlus / 4 + 1)
        {
            // For the middle row, add 1 to maxPlux because j < plusEndIndex and not j <= plusEndIndex
            plusEndIndex = (i == maxPlus /4 + 1) ? maxPlus+1 : plusStartIndex + 2 * i - 1;
            for (int j = 1; j <= maxPlus; j++)
            {
                if ((j >= plusStartIndex) && (j < plusEndIndex))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            plusEndIndex -= 2;
            for (int j = 1; j <= maxPlus; j++)
            {
                if ((j >= plusStartIndex) && (j < plusEndIndex))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}