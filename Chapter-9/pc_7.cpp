#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

// Function prototype
void sort_array(string arr[], int size);
void search_array(string arr[], int size, string str);

/**
 * @brief - Using selection sort to sort the array
 *
 * @param arr - array of strings
 * @param size - length of string array
 */
void sort_array(string arr[], int size)
{
    int i, minIndex;
    string minName;
    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;
        minName = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < minName)
            {
                minName = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = minName;
    }
}

/**
 * @brief - Binary search for string array
 *
 * @param arr - array of strings
 * @param size - length of string array
 */
void search_array(string arr[], int size, string str)
{
    int first = 0, last = size, middle = 0;
    bool foundString = false;
    middle = (first + last) / 2;

    for (int i = 0; i < size; i++)
    {
        middle = (first + last) / 2;
        if (arr[middle] == str)
        {
            foundString = true;
            cout << "\nMatch found!" << endl;
            cout << "Input string: " << str << endl;
            cout << "Found string: " << arr[middle] << endl;
            break;
        }
        else if (str > arr[middle])
        {
            first = middle + 1;
        }
        else if (str < arr[middle])
        {
            last = middle - 1;
        }
        foundString = false;
    }

    if (!foundString)
    {
        cout << "No match found" << endl;
    }
}

int main(void)
{
    const int ARRAY_LENGTH = 20;
    string names[ARRAY_LENGTH] =
        {"Collins, Bill", "Smith, Bart", "Sanchez, Manny", "Rubin, Sarah",
         "Allison, Jeff", "Moreno, Juan", "Moretti, Bella", "Wu, Hong",
         "Smith, Cathy", "Conroy, Pat", "Michalski, Joe", "Taylor, Tyrone",
         "Wolfe, Bill", "Patel, Renee", "Kelly, Sean", "Griffin, Jim",
         "Johnson, Jill", "Whitman, Jean", "Harrison, Rose", "Holland, Beth"};

    // Sort the array before using binary searh
    sort_array(names, ARRAY_LENGTH);

    // Print the sorted array
    // for (int i = 0; i < ARRAY_LENGTH; i++)
    // {
    //     cout << names[i] << endl;
    // }

    // Get input from user
    string userInput;
    cout << "Enter string: ";
    getline(cin, userInput);

    // Search the string arr
    search_array(names, ARRAY_LENGTH, userInput);

    return 0;
}