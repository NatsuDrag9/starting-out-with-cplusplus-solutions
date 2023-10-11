#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string runnerA, runnerB, runnerC;
    float timeA, timeB, timeC;

    cout << "Enter name of runner A: ";
    cin >> runnerA;
    cout << "Enter finish time of runner A (in sec): ";
    cin >> timeA;
    cout << "Enter name of runner B: ";
    cin >> runnerB;
    cout << "Enter finish time of runner B (in sec): ";
    cin >> timeB;
    cout << "Enter name of runner C: ";
    cin >> runnerC;
    cout << "Enter finish time of runner C (in sec): ";
    cin >> timeC;

    if (timeA < 0)
    {
        cout << "Invalid input!" << timeA << " should be a positive number." << endl;
    }
    if (timeB < 0)
    {
        cout << "Invalid input!" << timeB << " should be a positive number." << endl;
    }
    if (timeC < 0)
    {
        cout << "Invalid input!" << timeC << " should be a positive number." << endl;
    }

    if ((timeA < timeB) && (timeA < timeC))
    {
        cout << "First: " << runnerA << endl;

        if (timeB < timeC)
        {
            cout << "Second: " << runnerB << endl;
            cout << "Third: " << runnerC << endl;
        }
        else if (timeB > timeC)
        {
            cout << "Second: " << runnerC << endl;
            cout << "Third: " << runnerB << endl;
        }
        else if (timeB == timeC)
        {
            cout << "Second: " << runnerB << " and " << runnerC << endl;
        }
    }

    else if ((timeB < timeA) && (timeB < timeC))
    {
        cout << "First: " << runnerB << endl;

        if (timeA < timeC)
        {
            cout << "Second: " << runnerA << endl;
            cout << "Third: " << runnerC << endl;
        }
        else if (timeC < timeA)
        {
            cout << "Second: " << runnerC << endl;
            cout << "Third: " << runnerA << endl;
        }
        else if (timeA == timeC)
        {
            cout << "Second: " << runnerA << " and " << runnerC << endl;
        }
    }
    else if ((timeC < timeA) && (timeC < timeB))
    {
        cout << "First: " << runnerC << endl;

        if (timeB < timeA)
        {
            cout << "Second: " << runnerB << endl;
            cout << "Third: " << runnerA << endl;
        }
        else if (timeA < timeB)
        {
            cout << "Second: " << runnerA << endl;
            cout << "Third: " << runnerB << endl;
        }
        else if (timeA == timeB)
        {
            cout << "Second: " << runnerA << " and " << runnerB << endl;
        }
    }
    else if ((timeA == timeB) && (timeA < timeC))
    {
        // Also covers the case of (timeB == timeA) && (timeB < timeC)
        cout << "First: " << runnerA << " and " << runnerB << endl;
        cout << "Second: " << runnerC << endl;
    }
    else if ((timeA == timeC) && (timeA < timeB))
    {
        // Also covers the case of (timeC == timeA) && (timeC < timeB)
        cout << "First: " << runnerA << " and " << runnerC << endl;
        cout << "Second: " << runnerB << endl;
    }
    else if ((timeB == timeC) && (timeB < timeA))
    {
        cout << "First: " << runnerB << " and " << runnerC << endl;
        cout << "Second: " << runnerA << endl;
    }
    else if ((timeA == timeB) && (timeA == timeC)){
        cout << "All runners finish at the same time. All the three runeers are first!" << endl;
    }

    return 0;
}