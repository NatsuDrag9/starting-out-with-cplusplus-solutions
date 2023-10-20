#include <iostream>
using namespace std;

// Function prototypes
void sort_array(int *arr, int size);
int calculate_mode(int arr[], int size);

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
int calculate_mode(int arr[], int size)
{
    int mode = 0, maxFreq = 0;
    for(int i = 0; i < size; i++){
        int freq = 0;
        for(int j = 0; j < size; j++){
            if(arr[j] == arr[i]){
                freq++;
            }
        }
        if(freq > maxFreq){
            maxFreq = freq;
            mode = arr[i];
        }
    }
    return mode;
}

int main(void)
{
    int ARRAY_LENGTH = 10;
    int *pieArr = new int[ARRAY_LENGTH];

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
        pieArr[i] = userInput;
    }

    // Sort the array in ascending order
    sort_array(pieArr, ARRAY_LENGTH);

    // Calculate mode
    cout << "Mode is: " << calculate_mode(pieArr, ARRAY_LENGTH) << endl;

    delete[] pieArr;
    pieArr = NULL;
    return 0;
}