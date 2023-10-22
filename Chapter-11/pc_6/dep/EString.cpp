#include <iostream>
#include <cstdlib>
#include "../inc/EString.h"

/**
 * @brief Default constructor
 *
 * @param str
 */
EncryptableString::EncryptableString()
{
    // for(string::iterator it = (*this).begin(); it != (*this).end(); ++it){
    //     if(isalpha(*it)){
    //         cout << "Invalid input! Object must be an English alphabet. Exiting..." << endl;
    //         exit(0);
    //     }
    // }
}

/**
 * @brief Encrypts the string contained in the object by replacing each letter with its successor in the ASCII ordering. For eg., the string "baa" would be encrypted to "cbb". Assuming that the successor of 'z' is 'a' and 'Z' is 'A'
 * 
 */
void EncryptableString::encrypt(){
    for(size_t i = 0; i < this->length(); i++){
        int asciiValue = static_cast<int>((*this)[i]);
        if( asciiValue == 90){
            // If current character is Z
            (*this)[i] = 'A';
        }
        else if( asciiValue == 122){
            // If current character is z
            (*this)[i] = 'a';
        }
        else{
            (*this)[i] = static_cast<char>(asciiValue+1);
        }
    }
}