#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int NAME_SIZE = 51;

struct Division
{
    char name[NAME_SIZE];
    int quarter;
    float qSales;
};

/*
Tested the program with .txt files in the current directory
*/
int main(void)
{
    Division div;
    ofstream outputFile;
    char response;

    // Opening the file
    outputFile.open("pc_10.dat", ios::binary);
    if (outputFile.fail())
    {
        cout << "Error opening pc_10.dat. Exiting..." << endl;
        exit(1);
    }
    // outputFile.open("pc_10.txt", ios::binary);
    // if (outputFile.fail())
    // {
    //     cout << "Error opening pc_10.txt. Exiting..." << endl;
    //     exit(1);
    // }

    do
    {
        // Inputs from the user
        cout << "Enter the following information about a company's division" << endl;
        cout << "Enter division name: ";
        cin.getline(div.name, NAME_SIZE);
        cout << "Enter quarter number (1, 2, 3, or 4): ";
        cin >> div.quarter;
        if ((div.quarter < 1) || (div.quarter > 4))
        {
            cout << "Invalid input! Quarter number should be 1, 2, 3 or 4. Exiting..." << endl;
            exit(2);
        }
        cout << "Enter sales for quarter " << div.quarter << " (in ₹): ";
        cin >> div.qSales;
        if (div.qSales < 0)
        {
            cout << "Invalid input! Sales must be a positive number. Exiting..." << endl;
            exit(3);
        }

        // Writing to the file
        outputFile.write(reinterpret_cast<char*>(&div), sizeof(div));
        // outputFile << div.name << "\n" << div.quarter << "\n" << div.qSales << "\n" << endl;

        // Asking for another record
        cout << "\nDo you want to enter another record? ";
        cin >> response;
        cin.ignore();
        cout << '\n';
    } while (toupper(response) == 'Y');

    outputFile.close();
    return 0;
}
