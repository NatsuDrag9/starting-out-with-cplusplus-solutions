#include <iostream>
#include "../inc/BCheckString.h"
using namespace std;

#include "../inc/BCheckString.h"

/**
 * @brief Default constructor that does nothing
 * 
 */
BCheckString::BCheckString(){
    // Do nothing
}

/**
 * @brief Constructor that recevies a string object by value, passes it on to the base class constructor and sets the string member
 * 
 * @param s - string object
 */
BCheckString::BCheckString(string s) : string(s){
    set_string(s);
}

/**
 * @brief Sets the str data member of the class
 * 
 * @param s - value to be set
 */
void BCheckString::set_string(string s){
    str = s;
}

/**
 * @brief Overloading index [] operator to throw a BoundsException object if k is negative or is greater than or equal to the length of the string. If k is within the bounds of the string, the character at position k is returned
 * 
 * @param k - index of the string
 * @return char - character at position k
 */
char BCheckString::operator[](int k){
    if(k < 0 || (size_t)k >= str.length()){
        throw BoundsException(k);
    }
    return str[k];
}