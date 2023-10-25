#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 30;
    char fileName[ARRAY_LENGTH];
    ifstream inputFile;

    // Asking user for filename
    cout << "Enter file name: ";
    cin.getline(fileName, ARRAY_LENGTH);

    // Opening the file
    inputFile.open(fileName);
    if (inputFile.fail())
    {
        cout << "Error opening " << fileName << ". Exiting..." << endl;
        exit(1);
    }

    char ch = inputFile.peek();
    if (ch != EOF)
    {
        // File is not empty
        int count = 0;
        // char fileContents[3*ARRAY_LENGTH];

        while (count < 10)
        {
            // inputFile.getline(fileContents, strlen(fileContents), '\n');
            if (inputFile.eof())
            {
                cout << "\nDisplayed entire file" << endl;
                break;
            }
            
            if (ch == '\n')
            {
                count++;
            }
            ch = inputFile.get();
            cout << ch;
        }
    }
    else
    {
        // File is empty
        cout << "Empty file. Exiting..." << endl;
        inputFile.close();
        return 0;
    }

    inputFile.close();
    return 0;
}