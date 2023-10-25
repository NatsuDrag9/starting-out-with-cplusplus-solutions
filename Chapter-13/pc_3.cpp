#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

void display_file(ifstream &iFile);
void display_punchline(ifstream &iFile);

/**
 * @brief Displays the contents of the file
 *
 * @param iFile - File to read
 */
void display_file(ifstream &iFile)
{
    char ch = iFile.get();
    while (!iFile.eof())
    {
        cout << ch;
        ch = iFile.get();
    }
    cout << "\n";
}

/**
 * @brief Displays the last line from the file
 *
 * @param iFile
 */
void display_punchline(ifstream &iFile)
{
    long offset = 0;
    iFile.seekg(0L, ios::end);
    char ch = iFile.peek();
    while (ch != '\n')
    {
        offset--;
        iFile.seekg(offset, ios::end);
        ch = iFile.peek();
    }
    iFile.seekg(offset, ios::end);
    display_file(iFile);
}

int main(void)
{
    string jokeFile, punchLineFile;
    cout << "Enter joke file name: ";
    cin >> jokeFile;
    cout << "Enter punch line file name: ";
    cin >> punchLineFile;

    ifstream inputFile;
    
    // Displaying the joke
    inputFile.open(jokeFile.c_str());
    if (!inputFile)
    {
        cout << "Error opening " << jokeFile << ". Exiting..." << endl;
        exit(1);
    }
    
    display_file(inputFile);
    inputFile.close();

    // Displaying the punchline
    inputFile.open(punchLineFile.c_str());
    if (!inputFile)
    {
        cout << "Error opening " << punchLineFile << ". Exiting..." << endl;
        exit(1);
    }
    display_punchline(inputFile);
    inputFile.close();

    return 0;
}