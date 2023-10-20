#include <iostream>
using namespace std;

// Function prototypes
void sort_array(int *arr, int size);
float calculate_median(int *arr, int size);

/**
 * @brief - Using selection sort to sort the array in ascending order
 *
 * @param arr - pointer to address of first element of the integer array
 * @param size - length of integer array
 */
void sort_array(int *arr, int size)
{
    int temp = 0, minIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        temp = *(arr + i);
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *(arr + i))
            {
                *(arr + i) = *(arr + j);
                minIndex = j;
            }
        }
        *(arr + minIndex) = temp;
    }
}

/**
 * @brief - Calcualtes and returns the mode of the received array containing number of pie pieces eaten
 *
 * @param arr - pointer to address of first element of the integer array
 * @param size - size of the array
 * @return int - mode
 */
float calculate_median(int *arr, int size)
{
    float median = 0;
    if (size % 2 == 0)
    {
        median = (static_cast<float>(*(arr + size/2) + *(arr+size/2 - 1)))/2.0;
    }
    else{
        median = *(arr+size/2);
    }
    return median;
}

int main(void)
{
    int ARRAY_LENGTH = 9;
    // int ARRAY_LENGTH = 10;
    int *arr = new int[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        int userInput = 0;
        cout << "Enter number of pieces eaten by person " << i + 1 << ": ";
        cin >> userInput;
        if (userInput < 0)
        {
            cout << "Invalid input! Number of pieces eaten must be a positive number. Exiting..." << endl;
            return 0;
        }
        arr[i] = userInput;
    }

    // Sort the array in ascending order
    sort_array(arr, ARRAY_LENGTH);

    // Calculate median
    cout << "Median is: " << calculate_median(arr, ARRAY_LENGTH) << endl;

    delete[] arr;
    arr = NULL;
    return 0;
}