#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    const int CURRENT_YEAR = 2023;
    int userYear = 0;
    string userName;

    cout << "Enter your name: ";
    cin >> userName;
    cout << "Enter your birth year: ";
    cin >> userYear;
    if ((userYear < 1800) || (userYear > 2099))
    {
        cout << "Invalid input! Year must be a positive number lying between 1800 and 2099. Exiting..." << endl;
        return 0;
    }
    else
    {
        if (userYear > CURRENT_YEAR)
        {
            cout << "Sorry, you are not born yet! First come into existence then I'll calculate your age :P" << endl;
            return 0;
        }
        cout << "Hello " << userName << ", you are " << CURRENT_YEAR - userYear << " old." << endl;
    }

    return 0;
}