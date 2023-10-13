#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int maxPlus = 7;

    // Displays diamond pattern
    cout << "This program displays a diamond pattern. Hope you like it!" << endl;

    // Upper half of pattern
    for (int i = 1; i <= maxPlus / 2 + 1; i++)
    {
        int plusStartIndex = (maxPlus / 2 + 1) - (i - 1);
        int plusEndIndex = (maxPlus / 2 + 1) + (i - 1);
        for (int j = 1; j <= maxPlus; j++)
        {
            if ((j >= plusStartIndex) && (j <= plusEndIndex))
            {
                cout << "+";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower half of pattern
    for (int i = 1; i <= maxPlus - (maxPlus / 2 + 1); i++)
    {
        int plusStartIndex = i + 1;
        int plusEndIndex = maxPlus - i;
        for (int j = 1; j <= maxPlus; j++)
        {
            if ((j >= plusStartIndex) && (j <= plusEndIndex))
            {
                cout << "+";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}