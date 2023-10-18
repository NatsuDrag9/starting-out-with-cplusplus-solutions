#include <iostream>
#include <string>
using namespace std;

int find_lowest(int arr[], int size);
int find_highest(int arr[], int size);
void display_report(int arr1[], string arr2[], int size);

/**
 * @brief - Finds the lowest selling salsa type and returns the corresponding index
 *
 * @param arr - array holding number of jars
 * @param size - size of the array
 * @return int - returns the array index of the lowest selling salsa type
 */
int find_lowest(int arr[], int size)
{
    int lowestSaleIndex = 0;
    int lowest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] <= lowest)
        {
            lowest = arr[i];
            lowestSaleIndex = i;
        }
    }
    return lowestSaleIndex;
}

/**
 * @brief - Finds the highest selling salsa type and returns the corresponding index
 *
 * @param arr - integer array holding number of jars
 * @param size - size of the array
 * @return int - returns the array index of the highest selling salsa type
 */
int find_highest(int arr[], int size)
{
    int highestSaleIndex = 0;
    int highest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= highest)
        {
            highest = arr[i];
            highestSaleIndex = i;
        }
    }
    return highestSaleIndex;
}

/**
 * @brief - Displays a report containing the sales of each salsa type, total sales and the names of highest and lowest selling salsa type
 * 
 * @param arr1 - integer array containing number of jars sold
 * @param arr2 - string array containing the names of salsa type
 * @param size - size of both arrays
 */
void display_report(int arr1[], string arr2[], int size){
    int lowestSaleIndex = find_lowest(arr1, size);
    int highestSaleIndex = find_highest(arr1, size);
    int totalSales = 0;

    cout << "Sales of each salsa type" << endl;
    for(int i = 0; i < size; i++){
        cout << "Number of " << arr2[i] << " jars sold: " << arr1[i] << endl;
        totalSales += arr1[i];
    }
    cout << "\nTotal sales: " << totalSales << endl;
    cout << "Highest selling salsa product: " << arr2[highestSaleIndex] << endl;
    cout << "Lowest selling salsa product: " << arr2[lowestSaleIndex] << endl;
}

int main(void)
{
    const int ARRAY_LENGTH = 5;
    string salsa[] = {"mild", "medium", "sweet", "hot", "zetsy"};
    int salsaJarsSold[5] = {0};
    int userInput = 0;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << "Enter number of jars sold for " << salsa[i] << ": ";
        cin >> userInput;
        if (userInput < 0)
        {
            cout << "Invalid input! Sales must be a positive integer. Exiting..." << endl;
            break;
        }
        salsaJarsSold[i] = userInput;
    }

    display_report(salsaJarsSold, salsa, ARRAY_LENGTH);

    return 0;
}