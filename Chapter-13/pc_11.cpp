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
    ifstream inputFile;
    char response;

    // Opening the file
    inputFile.open("pc_10.dat", ios::binary);
    if (inputFile.fail())
    {
        cout << "Error opening pc_10.dat. Exiting..." << endl;
        exit(1);
    }

    inputFile.read(reinterpret_cast<char *>(&div), sizeof(div));
    while (!inputFile.eof())
    {

        cout << "Division name: " << div.name << endl;
        cout << "Quarter " << div.quarter << " sales (in ₹): " << div.qSales << endl;

        cout << "\nPress any key to see the next record. ";
        cin.get(response);
        inputFile.read(reinterpret_cast<char *>(&div), sizeof(div));
    }

    cout << "Finished reading all records" << endl;
    inputFile.close();
    return 0;
}
