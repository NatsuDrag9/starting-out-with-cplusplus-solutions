#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Function prototype/**
char *replace_substring(const char *str1, const char *str2, const char *str3);
string replace_substring(string str1, string str2, string str3);

/**
 * @brief Accepts three string objects, searches str 1 for all occurances of str2, replaces it with str3 and returns the new replaced string
 *
 * @param str1 - string in which the search operation is performed
 * @param str2 - string to be searched
 * @param str3 - the replacement
 * @return char* - pointer to the replaced string
 */
char *replace_substring(const char *str1, const char *str2, const char *str3)
{
    const char *tempStr1 = str1;
    const char *found;
    char *result = new char[strlen(str1) + 1];
    char *dest = result;

    while ((found = strstr(tempStr1, str2)) != nullptr)
    {
        // Copy the characters before the found substring into dest
        strncpy((char *)dest, tempStr1, found - tempStr1);
        dest += (found - tempStr1);

        // Copy replacement substring str3 into dest
        strncpy((char *)dest, str3, strlen(str3));
        dest += strlen(str3);

        // Increment tempStr1 to new position
        tempStr1 = found + strlen(str2);
    }

    // Copy the remaining characters after the last match
    strcpy(dest, tempStr1);
    return result;
}

/**
 * @brief Accepts three string objects, searches str 1 for all occurances of str2, replaces it with str3 and returns the new replaced string
 *
 * @param str1 - string in which the search operation is performed
 * @param str2 - string to be searched
 * @param str3 - the replacement
 * @return string - the new string with the replaced substring
 */
string replace_substring(string str1, string str2, string str3)
{
    // First position of str2 in str1
    size_t pos = str1.find(str2);
    while (pos != string::npos)
    {
        // Replace the first occurrance
        str1.replace(pos, str2.length(), str3);

        // Find next occurrance of str2 in str1
        pos = str1.find(str2, pos + str3.length());
    }

    return str1;
}

int main(void)
{
    const char* charPtr1 = "The the was theing inthe a";
    const char* charPtr2 = "the";
    const char* charPtr3 = "that";
    char* replaced = replace_substring(charPtr1, charPtr2, charPtr3);
    cout << "Replacing \"" << charPtr2 << "\" in \"" << charPtr1 << "\" with \"" << charPtr3 << "\": " << replaced << endl;
    delete [] replaced;

    string str1 = "the dog jumped over the fence";
    string str2 = "the";
    string str3 = "that";
    cout << endl;
    cout << "Replacing \"" << str2 << "\" in \"" << str1 << "\" with \"" << str3 << "\": " << replace_substring(str1, str2, str3) << endl;
    return 0;
}