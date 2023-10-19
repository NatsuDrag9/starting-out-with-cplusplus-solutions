#include <iostream>
using namespace std;

// Function prototype
void selection_sort(int arr[], int size);
void bubble_sort(int arr[], int size);
void display_array(int arr[], int size);

/**
 * @brief - Using selection sort to sort the array
 *
 * @param arr - array of integers
 * @param size - length of integer array
 */
void selection_sort(int arr[], int size)
{
    int temp, minIndex, passCount = 0;
    for (int i = 0; i < size - 1; i++)
    {
        passCount++;
        minIndex = i;
        temp = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                arr[i] = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = temp;
        // Printing after each pass
        cout << "Selection sort: pass " << passCount << endl;
        display_array(arr, size);
    }
}

/**
 * @brief - Using bubble sort to sort the array
 *
 * @param arr - array of integers
 * @param size - length of integer array
 */
void bubble_sort(int arr[], int size)
{
    int temp, swapped = 0, passCount = 0;
    do
    {
        swapped = 0;
        passCount++;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                swapped = 1;
            }
        }

        // Printing after each pass
        cout << "Bubble sort: pass " << passCount << endl;
        display_array(arr, size);
    } while (swapped);
}

/**
 * @brief - Displays the contents of the received array
 *
 * @param arr - integer array
 * @param size - length of the integer array
 */
void display_array(int arr[], int size)
{
    cout << "{" << arr[0];
    for (int i = 1; i < size; i++)
    {
        cout << ", " << arr[i];
    }
    cout << "}" << endl;
}

int main(void)
{
    const int ARRAY_LENGTH = 8;
    int arr1[ARRAY_LENGTH] = {565, 452, 789, 877, 845, 130, 808, 456};
    int arr2[ARRAY_LENGTH] = {565, 452, 789, 877, 845, 130, 808, 456};

    cout << "Printing unsorted first array" << endl;
    display_array(arr1, ARRAY_LENGTH);
    bubble_sort(arr1, ARRAY_LENGTH);

    cout << "\nPrinting unsorted second array" << endl;
    display_array(arr2, ARRAY_LENGTH);
    selection_sort(arr2, ARRAY_LENGTH);

    return 0;
}