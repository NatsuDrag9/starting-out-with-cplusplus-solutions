#include <iostream>
using namespace std;

// Function prototypes
int binary_search(int array[], int first, int last, int value);
bool is_member(int array[], int size, int searchValue);

/**
 * @brief Binary search using recursion
 * Base case: first > last, return -1
 *
 * @param array - array to be searched
 * @param first - index of first element in the array
 * @param last - index of last element in the array
 * @param value - value to be searched for
 * @return int - index of the value in the array if found, else -1
 */
int binary_search(int array[], int first, int last, int value)
{
    if (first > last)
    {
        // Base case
        return -1;
    }

    int middle = (first + last) / 2;
    if (value == array[middle])
    {
        return middle;
    }
    else if (value < array[middle])
    {
        return binary_search(array, first, middle - 1, value);
    }
    else
    {
        return binary_search(array, middle + 1, last, value);
    }
}

/**
 * @brief Calls the binary_search() function to search for the value in the array and returns true if the value is found else false
 *
 * @param array - array to be searched
 * @param size - size of the array
 * @param searchValue - value to be searched for
 * @return true - if value is found
 * @return false - if value is not found
 */
bool is_member(int array[], int size, int searchValue)
{
    int first = 0, last = size - 1;
    return binary_search(array, first, last, searchValue) >= 0 ? true : false;
}

int main(void)
{
    int arraylength = 1, searchValue = 0;
    cout << "Enter length of array: ";
    cin >> arraylength;
    if (arraylength <= 0)
    {
        cout << "Invalid input! Array must contain at least one element. Exiting...";
        return 0;
    }
    int *arr = new int[arraylength];

    for (int i = 0; i < arraylength; i++)
    {
        cout << "Enter array element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter value to be searched in the array: ";
    cin >> searchValue;

    if(is_member(arr, arraylength, searchValue)){
        cout << searchValue << " is a member of the array." << endl;
    }
    else{
        cout << searchValue << " is not a member of the array." << endl;
    }

    delete [] arr;
    return 0;
}