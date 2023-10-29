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

    // Removing elements from the list
    cout << "\nReversing and printing the list:" << endl;
    llObj.reverse();
    llObj.print_elements();

    return 0;
}