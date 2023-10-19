#include <iostream>
using namespace std;

// Function prototype
int selection_sort(int arr[], int size);
int bubble_sort(int arr[], int size);

/**
 * @brief - Using selection sort to sort the array and returns the number of comparisons
 *
 * @param arr - array of integers
 * @param size - length of integer array
 * @return int - number of comparisons
 */
int selection_sort(int arr[], int size)
{
    int temp, minIndex, comparisonCount = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        temp = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                arr[i] = arr[j];
                minIndex = j;
                comparisonCount++;
            }
        }
        arr[minIndex] = temp;
    }
    return comparisonCount;
}

/**
 * @brief - Using bubble sort to sort the array and returns the number of comparisons
 *
 * @param arr - array of integers
 * @param size - length of integer array
 * @return int - number of comparisons
 */
int bubble_sort(int arr[], int size)
{
    int temp, comparisonCount = 0;
    int swapped = 0; // Swap flag
    do
    {
        swapped = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                comparisonCount++;

                swapped = 1;
            }
        }
    } while (swapped);
    return comparisonCount;
}

int main(void)
{
    const int ARRAY_LENGTH = 20;
    int arr1[ARRAY_LENGTH] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
        1005239, 7895129};
    int arr2[ARRAY_LENGTH] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
        1005239, 7895129};

    cout << "Number of comparisons using selection sort: " << selection_sort(arr1, ARRAY_LENGTH) << endl;
    cout << "Printing selection sorted array"
         << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << arr1[i] << ", ";
    }
    cout << endl;
    cout << "\nNumber of comparisons using bubble sort: " << bubble_sort(arr2, ARRAY_LENGTH) << endl;
    cout << "Printing bubble sorted array"
         << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << arr2[i] << ", ";
    }
    cout << endl;

    return 0;
}