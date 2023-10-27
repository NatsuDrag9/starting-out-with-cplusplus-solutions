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
QuickSort::QuickSort()
{
    nComparisons = 0;
}

/**
 * @brief Constructor to initialize the number of comparisons
 *
 * @param _nComparions
 */
QuickSort::QuickSort(int _nComparions)
{
    set_comparisons(_nComparions);
}

/**
 * @brief Returns the number of comparisons performed during sorting
 *
 * @return int - number of comparisons
 */
int QuickSort::get_comparisons()
{
    return nComparisons;
}

/**
 * @brief Partitions the array and returns the new upperbound index
 * 
 * @param arr - array to be paritioned
 * @param lb - lower bound index of the array
 * @param ub - upper bound index of the array
 * @return int - new upperbound index
 */
int QuickSort::partition(int arr[], int lb, int ub){
    int pivot = arr[lb];
    int start = lb+1, end = ub;
    while(start < end){
        while(arr[start] <= pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

/**
 * @brief Sorting algorithm: quick sort
 * 
 * @param arr - array to be sorted
 * @param lb - lower bound index of the array
 * @param ub - upper bound index of the array
 */
void QuickSort::quick_sort(int arr[], int lb, int ub){
    if(lb < ub){
        int pos = partition(arr, lb, ub);
        quick_sort(arr, lb, pos-1);
        quick_sort(arr, pos+1, ub);
    }
}

/**
 * @brief A virtual function that overrides AbstractSort's sort() to sort the received array of integers in ascending order using quick sort
 * 
 * @param arr - array of integers
 * @param size - length of the array
 */
void QuickSort::sort(int arr[], int size)
{
    quick_sort(arr, 0, size-1);
}