#include <iostream>
using namespace std;

// Function prototypes
void sort_array(int *arr, int size);
float calculate_median(int *arr, int size);
int calculate_mode(int arr[], int size);
float calculate_average(int *arr, int size);

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
        median = (static_cast<float>(*(arr + size / 2) + *(arr + size / 2 - 1))) / 2.0;
    }
    else
    {
        median = *(arr + size / 2);
    }
    return median;
}

/**
 * @brief - Calcualtes and returns the mode of the received array containing number of pie pieces eaten
 *
 * @param arr - pointer to address of first element of the integer array
 * @param size - size of the array
 * @return int - mode of the array
 */
int calculate_mode(int arr[], int size)
{
    int mode = 0, maxFreq = 0;
    for (int i = 0; i < size; i++)
    {
        int freq = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                freq++;
            }
        }
        if (freq > maxFreq)
        {
            maxFreq = freq;
            mode = arr[i];
        }
    }
    return mode;
}

/**
 * @brief - Calculates and returns the average of the received interger array
 *
 * @param arr - pointer to address of first element of the int array
 * @param size - size of the array
 * @return float - average of the test scores
 */
float calculate_average(int *arr, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    float avg = sum / (static_cast<float>(size));
    return avg;
}

int main(void)
{
    int arrayLength = 0;
    cout << "Enter number of students: ";
    cin >> arrayLength;
    if (arrayLength < 0)
    {
        cout << "Invalid input! Number of students must be a positive number. Exiting..." << endl;
        return 0;
    }
    int *movieArr = new int[arrayLength];
    for (int i = 0; i < arrayLength; i++)
    {
        int userInput = 0;
        cout << "Enter number of movies seen by student " << i + 1 << ": ";
        cin >> userInput;
        if ((userInput < 0) || (userInput > 100))
        {
            cout << "Invalid input! Number of movies seen must be a positive number. Exiting..." << endl;
            return 0;
        }
        movieArr[i] = userInput;
    }

    // Sort the array in ascending order
    sort_array(movieArr, arrayLength);

    // Calculate median
    cout << "Median is: " << calculate_median(movieArr, arrayLength) << endl;
    // Calculate mode
    cout << "Mode is: " << calculate_mode(movieArr, arrayLength) << endl;
    // Calculate average
    cout << "Average is: " << calculate_average(movieArr, arrayLength) << endl;

    delete[] movieArr;
    movieArr = NULL;
    return 0;
}