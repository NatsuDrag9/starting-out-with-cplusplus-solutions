#include <iostream>
#include "./inc/AbstractSort.h"
using namespace std;

int main(void)
{
    const int ARRAY_LENGTH = 5;
    int arr[ARRAY_LENGTH] = {10, 9, 11, 1, 2};
    cout << "Initial array: {" << arr[0];
    for (int i = 1; i < ARRAY_LENGTH; i++)
    {
        cout << ", " << arr[i];
    }
    cout << "}" << endl;

    Sort sortObj;
    sortObj.sort(arr, ARRAY_LENGTH);
    cout << "Sorted array: {" << arr[0];
    for (int i = 1; i < ARRAY_LENGTH; i++)
    {
        cout << ", " << arr[i];
    }
    cout << "}" << endl;
    cout << "Number of comparisons: " << sortObj.get_comparisons() << endl;

    return 0;
}