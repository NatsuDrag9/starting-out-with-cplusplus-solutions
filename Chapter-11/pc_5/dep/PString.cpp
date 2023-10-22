#include <iostream>
#include "../inc/PString.h"

/**
 * @brief Default constructor
 * 
 */
PString::PString(){
    // Do nothing
}

/**
 * @brief Constructor that takes a string object as parameter and passes it to the string base class constructor
 * 
 * @param str 
 */
PString::PString(const string str) : string(str){
    // Do nothing
}

/**
 * @brief Checks whether the PString object is a palindrome or not
 * A palindrome is a string that reads the same backward as forward. Eg. mom, 123321, dad, radar
 * 
 * @return true - object is a palindrome
 * @return false - object is not a palindrome
 */
bool PString::is_palindrome(){
    for(size_t i = 0; i < this->length()/2; i++){
        if((*this)[i] != (*this)[this->length() -1 -i]){
            // Not a palindrome
            return false;
        }
    }
    // Is a palindrome
    return true;
}