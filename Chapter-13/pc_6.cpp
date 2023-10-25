#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

/*
Tested the program with .txt files in the current directory
*/
int main(void)
{
    const int ARRAY_LENGTH = 30;
    char inputFileName[ARRAY_LENGTH];
    char outputFileName[ARRAY_LENGTH];
    fstream inputFile, outputFile;

    // Asking the user for the filename
    cout << "Enter input file name: ";
    cin.getline(inputFileName, ARRAY_LENGTH);
    cout << "Enter output file name: ";
    cin.getline(outputFileName, ARRAY_LENGTH);

    // Opening the files
    inputFile.open(inputFileName, ios::in);
    if (inputFile.fail())
    {
        cout << "Error opening " << inputFileName << ". Exiting..." << endl;
        exit(1);
    }

    outputFile.open(outputFileName, ios::out);
    if (outputFile.fail())
    {
        cout << "Error opening " << outputFileName << ". Exiting..." << endl;
        exit(1);
    }

    string line;
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        size_t periodPos = line.find(".");

        // Convert all letters to lower case
        for (size_t i = 0; i < line.length(); i++)
        {
            line[i] = tolower(line[i]);
        }

        // First character of the line is a lower case letter
        if (isalpha(line[0]))
        {
            line[0] = toupper(line[0]);
        }
        
        // Checking characters after the period
        if (line[periodPos + 1] == ' ')
        {
            // Sentence starts after a period and a space character
            line[periodPos + 2] = toupper(line[periodPos + 2]);
        }
        else
        {
            // Sentence starts immediately after a period
            line[periodPos + 1] = toupper(line[periodPos + 1]);
        }
        outputFile << line << '\n';
    }

    inputFile.close();
    outputFile.close();
    return 0;
}
