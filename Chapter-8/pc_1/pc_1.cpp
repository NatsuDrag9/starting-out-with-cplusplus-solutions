#include <iostream>
using namespace std;

int count_perfect(int arr[], int size);

/**
 * @brief - Counts the number of perfect scores (i.e. 100) in the array and returns it
 *
 * @param arr - integer array containing the test scores
 * @param size - length of the array
 * @return int - returns the number of perfect test scores
 */
int count_perfect(int arr[], int size)
{
    int perfectScoreCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 100)
        {
            perfectScoreCount++;
        }
    }
    return perfectScoreCount;
}

int main(void)
{
    const int ARRAY_LENGTH = 15;
    int scoreArr[ARRAY_LENGTH];

    cout << "Enter at least 10 integer test scores" << endl;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << "Enter test score for subject # " << i + 1 << ": ";
        cin >> scoreArr[i];
        if ((scoreArr[i] < 0) || (scoreArr[i] > 100))
        {
            cout << "Invalid input! Test score should lie between 0 and 100." << endl;
            cout << "Enter test score for subject # " << i + 1 << " again : ";
            cin >> scoreArr[i];
        }
    }

    cout << "The number of perfect test scores: " << count_perfect(scoreArr, ARRAY_LENGTH) << endl;

    return 0;
}