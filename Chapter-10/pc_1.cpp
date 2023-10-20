#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sort_array(int *arr, int size);
float calculate_avg(int *arr, int size);
void display_array(int *arr, int size);

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
 * @brief - Calcualtes and returns the average of the received interger array containg test scores
 *
 * @param arr - pointer to address of first element of the integer array
 * @param size - size of the integer array
 * @return float - average of the test scores
 */
float calculate_avg(int *arr, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    float avg = sum / (static_cast<float>(size));
    return avg;
}

/**
 * @brief - Displays the contents of the received array
 *
 * @param arr - pointer to address of first element of the integer array
 * @param size - length of the integer array
 */
void display_array(int *arr, int size)
{
    cout << "{" << *arr;
    for (int i = 1; i < size; i++)
    {
        cout << ", " << *(arr + i);
    }
    cout << "}" << endl;
}

int main(void)
{
    int arrayLength = 0;
    cout << "Enter number of test scores: ";
    cin >> arrayLength;
    if (arrayLength < 0)
    {
        cout << "Invalid input! Number of test scores must be a positive number. Exiting..." << endl;
        return 0;
    }
    int *testArr = new int[arrayLength];
    for (int i = 0; i < arrayLength; i++)
    {
        int userInput = 0;
        cout << "Enter test score " << i + 1 << ": ";
        cin >> userInput;
        if ((userInput < 0) || (userInput > 100))
        {
            cout << "Invalid input! Test score must lie between 0 and 100. Exiting..." << endl;
            return 0;
        }
        testArr[i] = userInput;
    }

    sort_array(testArr, arrayLength);
    cout << "\nDisplaying sorted array" << endl;
    display_array(testArr, arrayLength);
    cout << "Average of " << arrayLength << " test scores: " << fixed << setprecision(2) << calculate_avg(testArr, arrayLength) << endl;

    delete[] testArr;
    testArr = NULL;

    return 0;
}