#include <iostream>
#include <cstdlib>
#include "../inc/Encryption.h"
using namespace std;

/**
 * @brief Default constructor that initializes key to 0
 *
 */
Encryption::Encryption()
{
    set_key(0);
}

/**
 * @brief Initialization constructor to open the input and output files
 *
 * @param inFileName - name of the input file from which data will be read
 * @param outFileName - name of the output file to which data will be written
 * @param key - key value to be set
 */
Encryption::Encryption(char *inFileName, char *outFileName, int _key)
{
    set_key(_key);
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
 * @brief Sets the key which is used to transform the character during encryption
 *
 * @param _key - value to be set to the key
 */
void Encryption::set_key(int _key)
{
    key = _key;
}

/**
 * @brief Encrypt function uses the virtual transform member function to transform individual characters.
 *
 */
void Encryption::encrypt()
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
 * @brief Close the file objects and destroy the Encryption:: Encryption object
 *
 */
Encryption::~Encryption()
{
    inFile.close();
    outFile.close();
}

/*
SimpleEncryption
*/

/**
 * @brief Initialization constructor that passes file names and the encryption key to the parent class
 *
 * @param inFileName - name of the input file from which data will be read
 * @param outFileName - name of the output file to which data will be written
 */
SimpleEncryption::SimpleEncryption(char *inFileName, char *outFileName, int _key)
    : Encryption(inFileName, outFileName, _key)
{
}

/**
 * @brief Receives a character and transforms it by adding a key to its ASCII value
 *
 * @param ch - character to be transformed
 * @return char - returns transformed character
 */
char SimpleEncryption::transform(char ch)
{
    return ch + key;
}

/*
UpperCase
*/
/**
 * @brief Initialization constructor that passes file names to the parent class
 * The parameter key of the base class initialization list is by default set to 0 as this class only transforms the characters to uppercase
 * 
 * @param inFileName 
 * @param outFileName 
 */
UpperCase::UpperCase(char *inFileName, char *outFileName) : Encryption(inFileName, outFileName, 0)
{
    // Do nothing
}

/**
 * @brief Transforms the received character to uppercase
 * 
 * @param ch - character to be transformed
 * @return char - uppercase character
 */
char UpperCase::transform(char ch){
    return toupper(ch);
}

/*
KeepOriginal
*/

/**
 * @brief Initialization constructor that passes file names to the parent class
 * The parameter key of the base class initialization list is by default set to 0 as this class creates an unchanged copy of the original file
 * 
 * @param inFileName 
 * @param outFileName 
 */
KeepOriginal::KeepOriginal(char *inFileName, char *outFileName) : Encryption(inFileName, outFileName, 0){
    // Do nothing
}

/**
 * @brief Returns the original character to create unchanged copy of inFile
 * 
 * @param ch - character to be transformed
 * @return char - unchanged character
 */
char KeepOriginal::transform(char ch){
    return ch;
}