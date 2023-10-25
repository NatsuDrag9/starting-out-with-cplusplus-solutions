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
    char fileName[ARRAY_LENGTH];
    ifstream inputFile;
    string searchString;

    // Asking the user for the filename
    cout << "Enter file name: ";
    cin.getline(fileName, ARRAY_LENGTH);
    cout << "Enter string to search in the file: ";
    getline(cin, searchString);

    // Opening the file
    inputFile.open(fileName);
    if (inputFile.fail())
    {
        cout << "Error opening " << fileName << ". Exiting..." << endl;
        exit(1);
    }

    int count = 0;
    string line;
    while(!inputFile.eof()){
        getline(inputFile, line);
        if(line.find(searchString) != string::npos){
            count++;
            cout << line << endl;
        }
    }
    cout << "\nNumber of occurances: " << count << endl;

    inputFile.close();
    return 0;
}
