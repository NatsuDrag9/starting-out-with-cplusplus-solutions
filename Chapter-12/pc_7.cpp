#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 30;
    char firstName[ARRAY_LENGTH], middleName[ARRAY_LENGTH], lastName[ARRAY_LENGTH];
    cout << "Enter first name (max length 30 characters): ";
    cin.getline(firstName, ARRAY_LENGTH);

    cout << "Enter middle name (max length 30 characters): ";
    cin.getline(middleName, ARRAY_LENGTH);

    cout << "Enter last name (max length 30 characters): ";
    cin.getline(lastName, ARRAY_LENGTH);

    char allNames[3 * ARRAY_LENGTH];
    int j = 0;
    for (size_t i = 0; i < strlen(lastName); i++)
    {
        allNames[j++] = lastName[i];
    }
    allNames[j++] = ',';
    allNames[j++] = ' ';
    for (size_t i = 0; i < strlen(firstName); i++)
    {
        allNames[j++] = firstName[i];
    }
    allNames[j++] = ' ';
    for (size_t i = 0; i < strlen(middleName); i++)
    {
        allNames[j++] = middleName[i];
    }

    cout << "Fourth array: " << allNames << endl;

    return 0;
}