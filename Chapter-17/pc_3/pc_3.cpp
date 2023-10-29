#include <iostream>
#include "./inc/SimpleLinkedList.h"
using namespace std;

int main(void)
{
    CopyLinkedList llObj;

    cout << "Adding 2.5 to original list." << endl;
    llObj.add(2.5);
    cout << "Adding 1.5 to original list." << endl;
    llObj.add(1.5);
    cout << "Adding 12.25 to original list." << endl;
    llObj.add(12.25);
    
    // Printing elements of original list
    cout << "\nElements of original list" << endl;
    llObj.print_elements();

    // Copying the linked list llObj
    cout << "\nElements of copied list" << endl;
    CopyLinkedList cpObj(llObj);
    cpObj.print_elements();

    return 0;
}