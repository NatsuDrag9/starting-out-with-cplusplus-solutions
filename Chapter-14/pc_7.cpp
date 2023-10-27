#include <iostream>
#include <string>
using namespace std;

// Function prototype
string reverse_string(string str);

/**
 * @brief Accepts a string as its argument and prints the string in reverse order using recursion
 * Base case: str.length() == 0, return empty string
 * 
 * @param str - string to reverse
 * @return string - each character of the string starting from the end
 */
string reverse_string(string str){
    if(str.length() == 0){
        return "";
    }
    return str[str.length()-1] + reverse_string(str.substr(0, str.length()-1));
}

int main(void){
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    cout << "Reversed string: " << reverse_string(userInput) << endl;
    return 0;
}