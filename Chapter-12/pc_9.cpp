#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Function prototype
char get_most_frequent_character (const char* strPtr);
string get_most_frequent_character (string str);

/**
 * @brief Retrieves the most frequently appearing character in the received C-string
 * 
 * @param strPtr - pointer to the string
 * @return char - most frequently appearing character
 */
char get_most_frequent_character (const char* strPtr){
    int maxFreq = 0;
    char maxFreqChar;
    for(size_t i = 0; i < strlen(strPtr); i++){
        int freq = 0;
        for(size_t j = 1; j < strlen(strPtr); j++){
            if(*(strPtr +i) == *(strPtr+j)){
                freq++;
            }
        }
        if(freq >= maxFreq){
            maxFreq = freq;
            maxFreqChar = *(strPtr+i);
        }
    }
    return maxFreqChar;
}

/**
 * @brief Retrieves the most frequently appearing character in the received string object
 * 
 * @param str - string object
 * @return string - most frequently appearing character
 */
string get_most_frequent_character(string str){
    int maxFreq = 0;
    string maxFreqChar;
    for(size_t i = 0; i < str.length(); i++){
        int freq = 0;
        for(size_t j = 1; j < str.length(); j++){
            if(str[i] == str[j]){
                freq++;
            }
        }
        if(freq >= maxFreq){
            maxFreq = freq;
            maxFreqChar = str[i];
        }
    }
    return maxFreqChar;
}

int main(void){
    // const int ARRAY_LENGTH = 30;
    // char strArr[ARRAY_LENGTH];
    // cout << "Enter a string: ";
    // cin.getline(strArr, ARRAY_LENGTH);
    // cout << "Most frequently appearing character: " << get_most_frequent_character(strArr) << endl;


    string strInput;
    cout << "Enter a string: ";
    getline(cin, strInput);
    cout << "Most frequently appearing character: " << get_most_frequent_character(strInput) << endl;
    return 0;
}