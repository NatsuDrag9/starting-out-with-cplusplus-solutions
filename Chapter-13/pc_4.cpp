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

    // Gets offset of the 10th line from the end of file
    long offset = 0;
    inputFile.seekg(0L, ios::end);
    char ch = inputFile.peek();
    int count = 0;
    while (count < 10)
    {
        if (ch == '\n')
        {
            count++;
        }
        offset--;
        inputFile.seekg(offset, ios::end);
        ch = inputFile.peek();
        
    }
    // The offset moves two additional places to the left in the above loop.
    // Adding two to offset to place the cursor at the beginning of 
    // 10th line from the end
    inputFile.seekg(offset+2, ios::end);

    // Displays the lines
    ch = inputFile.get();
    int i = 0;
    while (i < count)
    {
        if (inputFile.eof())
        {
            cout << "\nDisplayed entire file" << endl;
            break;
        }

        if (ch == '\n')
        {
            i++;
        }
        cout << ch;
        ch = inputFile.get();
    }

    inputFile.close();
    return 0;
}