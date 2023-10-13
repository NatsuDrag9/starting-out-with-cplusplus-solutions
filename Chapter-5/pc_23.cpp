#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ifstream inputFile;
    inputFile.open("pc_23.dat");
    int year1, year2, year3, year4, year5, year6;

    // Input validation
    if (!inputFile)
    {
        cout << "Could not open file. Exiting...";
        return 0;
    }

    // Reading from inputFile
    inputFile >> year1 >> year2 >> year3 >> year4 >> year5 >> year6;

    // Bar graph using '*'
    cout << "PRAIRIEVILLE POPULATION GROWTH (each * = 1000 people)" << endl << endl;;
    cout << "1900:";
    for (int i = 1; i < year1 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "1920:";
    for (int i = 1; i < year2 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "1940:";
    for (int i = 1; i < year3 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "1960:";
    for (int i = 1; i < year4 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "1980:";
    for (int i = 1; i < year5 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "2000:";
    for (int i = 1; i < year6 / 1000; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}