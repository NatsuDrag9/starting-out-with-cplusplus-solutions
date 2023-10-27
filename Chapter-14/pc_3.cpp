#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief - Partitions the received vector and sorts it
 * Algorithm:
 * left starting from index low+1 is incremented until the an element greater than the pivot element is found
 * right starting from high is decremented until the an element lesser than the pivot element is found
 * Both are swapped
 * Finally, the lesser element found by decrementing right is swapped with the pivot element at index low
 * 
 * @tparam T - typename of the template
 * @param arr - vector containing elements of type T
 * @param low - index of first element
 * @param high - index of last element
 * @return int - right
 */
template <typename T>
int partition(vector<T> &arr, int low, int high) {
    T pivot = arr[low];
    int left = low + 1;
    int right = high;
    bool done = false;

    while (!done) {
        while (left <= right && arr[left] <= pivot)
            left++;
        while (arr[right] >= pivot && right >= left)
            right--;

        if (right < left)
            done = true;
        else
            swap(arr[left], arr[right]);
    }

    swap(arr[low], arr[right]);
    return right;
}

/**
 * @brief Quicksort algorithm that uses partition function to break the vector and sort it
 * 
 * @tparam T - template of type T
 * @param arr - vector containing elements of type T
 * @param low - index of first element
 * @param high - index of last element
 */
template <typename T>
void quick_sort(vector<T> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quick_sort(arr, low, pivotIndex - 1);
        quick_sort(arr, pivotIndex + 1, high);
    }
}

template <typename T>
void quick_sort(vector<T> &arr) {
    quick_sort(arr, 0, arr.size() - 1);
}

/**
 * @brief Prints the vector on the console
 * 
 * @tparam T - template of type T
 * @param arr - vector containing elements of type T
 */
template <typename T>
void print_array(const vector<T> &arr) {
    for (const T &elem : arr)
        cout << elem << " ";
    cout << endl;
}

int main() {
    vector<int> intArr = {5, 2, 9, 3, 6, 8, 1, 4, 7};
    vector<double> doubleArr = {5.2, 2.1, 9.8, 3.6, 6.0, 8.4, 1.3, 4.7};

    cout << "Original Integer Array: ";
    print_array(intArr);
    quick_sort(intArr);
    cout << "Sorted Integer Array: ";
    print_array(intArr);

    cout << "\nOriginal Double Array: ";
    print_array(doubleArr);
    quick_sort(doubleArr);
    cout << "Sorted Double Array: ";
    print_array(doubleArr);

    return 0;
}
