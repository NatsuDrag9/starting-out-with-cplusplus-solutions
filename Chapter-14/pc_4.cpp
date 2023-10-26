#include <iostream>
using namespace std;

// Function prototype
int sum_array(int* arrPtr, int size);

/**
 * @brief Accepts an array of integers and calculates the sum of its elements recursively
 * Base case: size == 0
 * 
 * @param arr - array containing elements
 * @param size - length of the array
 * @return int - sum of elements of the array
 */
int sum_array(int* arrPtr, int size)
{
    if(size == 0){
        return 0;
    }
    return *arrPtr + sum_array(arrPtr+1, size-1);
}

int main(void)
{
    int arraylength = 1;
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

    cout << "Sum of elements: " << sum_array(arr, arraylength) << endl;

    delete [] arr;

    return 0;
}