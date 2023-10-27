#include <iostream>
#include "../inc/AbstractSort.h"
using namespace std;

/*
AbstractSort
*/
/**
 * @brief Sets the number of comparisons to the received parameter
 *
 * @param n - number of comparions to be set
 */
void AbstractSort::set_comparisons(int n)
{
    nComparisons = n;
}

/**
 * @brief Compares two array elements received as parameters and returns the greater element. If both elements are equal, then the element is returned
 *
 * @param arrElement1 - element 1
 * @param arrElement2 - element 2
 * @return int - returns the greater element or equal
 */
int AbstractSort::compare(int arrElement1, int arrElement2)
{
    if (arrElement1 > arrElement2)
    {
        set_comparisons(nComparisons + 1);
        return arrElement1;
    }
    else if (arrElement1 == arrElement2)
    {
        set_comparisons(nComparisons + 1);
        return arrElement1;
    }

    // Else return element 2
    set_comparisons(nComparisons + 1);
    return arrElement2;
}

/*
Sort
*/

/**
 * @brief Default constructor that initializes the number of comparisons to 0
 *
 */
Sort::Sort()
{
    nComparisons = 0;
}

/**
 * @brief Constructor to initialize the number of comparisons
 *
 * @param _nComparions
 */
Sort::Sort(int _nComparions)
{
    set_comparisons(_nComparions);
}

/**
 * @brief Returns the number of comparisons performed during sorting
 *
 * @return int - number of comparisons
 */
int Sort::get_comparisons()
{
    return nComparisons;
}

/**
 * @brief A virtual function that overrides AbstractSort's sort() to sort the received array of integers in ascending order
 * Sorting algorithm: bubble sort
 *
 * @param arr - array of integers
 * @param size - length of the array
 */
void Sort::sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapFlag = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            // Swap if element 1 is greater
            if (compare(arr[j], arr[j + 1]) == arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapFlag = true;
            }
        }
        if (!swapFlag)
        {
            break;
        }
    }
}