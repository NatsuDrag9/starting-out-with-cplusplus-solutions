#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
    ifstream inputFile;
    string name, first, last;

    inputFile.open("pc_26.dat");

    // Input validation
    if (!inputFile)
    {
        cout << "Input invalid. Could not open file. Exiting..." << endl;
        return 0;
    }
    else
    {
        // First entry
        inputFile >> name;
        first = name;
        last = name;

        // Loop to get names from user
        while (!inputFile.eof())
        {
            inputFile >> name;
            first = (name < first) ? name : first;
            last = (name > last) ? name : last;
        }

        cout << "\"" << first << "\" and stands first in line and \"" << last << "\" stands last in line." << endl;
        inputFile.close();
    }
    return 0;
}