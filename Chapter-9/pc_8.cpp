#include <iostream>
using namespace std;

// Function prototype
int linear_search(int arr[], int size, int n);
int binary_search(int arr[], int size, int n);

/**
 * @brief - Using linear search to search a sorted array and returns the number of comparisons
 *
 * @param arr - array of integers
 * @param size - length of integer array
 * @param n - the search element
 * @return int - number of comparisons
 */
int linear_search(int arr[], int size, int n)
{
    int comparisonCount = 0;
    for (int i = 0; i < size; i++)
    {
        comparisonCount++;
        if (arr[i] == n)
        {
            break;
        }
    }
    return comparisonCount;
}

/**
 * @brief - Using binary search to search a sorted array and returns the number of comparisons
 *
 * @param arr - array of integers
 * @param size - length of integer array
 * @param n - the search element
 * @return int - number of comparisons
 */
int binary_search(int arr[], int size, int n)
{
    int first = 0, last = size, middle = 0, comparisonCount = 0;
    bool foundString = false;
    middle = (first + last) / 2;

    while (!foundString && first <= last)
    {
        middle = (first + last) / 2;
        comparisonCount++;
        if (arr[middle] == n)
        {
            foundString = true;
        }
        else if (n > arr[middle])
        {
            first = middle + 1;
        }
        else if (n < arr[middle])
        {
            last = middle - 1;
        }
    }

    return comparisonCount;
}

int main(void)
{
    const int ARRAY_LENGTH = 20;
    int arr1[ARRAY_LENGTH] = {100, 100, 125, 130, 385, 452, 456, 458, 505, 555, 565, 654, 757, 782, 788, 789, 789, 808, 845, 877};
    int arr2[ARRAY_LENGTH] = {100, 100, 125, 130, 385, 452, 456, 458, 505, 555, 565, 654, 757, 782, 788, 789, 789, 808, 845, 877};

    cout << "Number of comparisons using linear search in a sorted array: " << linear_search(arr1, ARRAY_LENGTH, 788) << endl;
    cout << "\nNumber of comparisons using binary search in a sorted array: " << binary_search(arr2, ARRAY_LENGTH, 788) << endl;

    return 0;
}