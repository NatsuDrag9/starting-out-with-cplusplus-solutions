#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name, first, last;
    int numberOfStudents;

    cout << "Enter number of students in class: ";
    cin >> numberOfStudents;

    // Input validation
    if ((numberOfStudents < 1) || (numberOfStudents > 25))
    {
        cout << "Invalid input! Number of students shoud lie in the range of 1 through 25. Exiting..." << endl;
        return 0;
    }

    // First entry
    cout << "Enter student name: ";
    cin >> name;
    first = name;
    last = name;

    // Loop to get names from user
    for (int i = 1; i < numberOfStudents; i++)
    {
        cout << "Enter student name: ";
        cin >> name;
        first = (name < first) ? name : first;
        last = (name > last) ? name: last;
    }

    cout << first << " and stands first in line and " << last << " stands last in line." << endl;

    return 0;
}