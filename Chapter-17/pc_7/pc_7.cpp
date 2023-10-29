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

    // Searching the position of an element in the list
    cout << "\nThe position of 2.5 in the list is: " << llObj.search(2.5) << endl;
    cout << "The position of 1.5 in the list is: " << llObj.search(1.5) << endl;
    cout << "The position of 12.25 in the list is: " << llObj.search(12.25) << endl;

    return 0;
}