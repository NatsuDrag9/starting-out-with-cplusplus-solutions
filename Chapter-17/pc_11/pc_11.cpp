#include <iostream>
#include "./inc/SimpleLinkedList.h"
using namespace std;

int main(void)
{
    SimpleLinkedList llObj;

    cout << "Adding 2.5 to the list." << endl;
    llObj.add(2.5);
    cout << "Adding 1.5 to the list." << endl;
    llObj.add(1.5);
    cout << "Adding 12.25 to the list." << endl;
    llObj.add(12.25);

    // Printing elements of the list
    cout << "\nElements of the list:" << endl;
    llObj.print_elements();

    // Inserting new elements into the list
    cout << "\nAdding -10.99 to the list at position 0" << endl;
    llObj.insert(-10.99, 0);
    cout << "Adding -1.99 to the list at position 2" << endl;
    llObj.insert(-1.99, 2);
    cout << "Adding 0.99 to the list at position 0" << endl;
    llObj.insert(0.99, 0);
    cout << "Adding 99.99 to the list at position 7" << endl;
    llObj.insert(99.99, 7);
    cout << "\nElements of the list:" << endl;
    llObj.print_elements();

    // Sorting the list
    llObj.sort();
    cout << "\nSorted list: " << endl;
    llObj.print_elements();

    return 0;
}