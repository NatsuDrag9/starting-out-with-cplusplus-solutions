#include <iostream>
#include <cstdlib>
#include "../inc/AbstractFilter.h"
using namespace std;

/**
 * @brief Default constructor that initializes key to 0
 *
 */
AbstractFilter::AbstractFilter()
{
    // Do nothing
}

/**
 * @brief Initialization constructor to open the input and output files
 *
 * @param inFileName - name of the input file from which data will be read
 * @param outFileName - name of the output file to which data will be written
 */
AbstractFilter::AbstractFilter(char *inFileName, char *outFileName)
{
    inFile.open(inFileName);
    outFile.open(outFileName);
    if (!inFile)
    {
        cout << "Error opening " << inFileName;
        exit(1);
    }
    if (!outFile)
    {
        cout << "Error opening " << outFileName;
        exit(1);
    }
}

/**
 * @brief Encrypt function uses the virtual transform member function to transform individual characters.
 *
 */
void AbstractFilter::file_filter()
{
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail())
    {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

/**
 * @brief Close the file objects and destroy the AbstractFilter:: AbstractFilter object
 *
 */
AbstractFilter::~AbstractFilter()
{
    inFile.close();
    outFile.close();
}

/*
SimpleEncryption
*/

/**
 * @brief Initialization constructor that passes file names to the parent class
 * 
 * @param inFileName - name of the input file from which data will be read
 * @param outFileName - name of the output file to which data will be written
 */
DoubleSpace::DoubleSpace(char *inFileName, char *outFileName)
    : AbstractFilter(inFileName, outFileName)
{
}

/**
 * @brief Checks for a newline in the received character and inserts a blank line between any two lines.
 * 
 * @param ch - received character
 * @return char - returns the ch
 */
char DoubleSpace::transform(char ch)
{
    if(ch == '\n'){
        outFile.put('\n');
    }
    return ch;
}