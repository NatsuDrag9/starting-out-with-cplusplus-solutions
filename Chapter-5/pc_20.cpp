#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int maxPlus = 7;

    // Displays arrow pattern
    cout << "This program displays an arrow pattern. Hope you like it!" << endl;

    int i = 1, plusStartIndex = 1, plusEndIndex = 0;
    while (i <= maxPlus)
    {
        // Upper half of the pattern
        if (i <= maxPlus / 2 + 1)
        {
            plusEndIndex = plusStartIndex + 2 * i - 1;
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
        // Lower half of the pattern
        else if (i > maxPlus / 2 + 1)
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