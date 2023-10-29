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
    cout << "\nElements of the list" << endl;
    llObj.print_elements();

    // Removing elements from the list
    cout << "\nRemoving 12.25 from the list" << endl;
    llObj.remove(12.25);
    cout << "Elements of the list" << endl;
    llObj.print_elements();
    cout << "\nRemoving 2.5 from the list" << endl;
    llObj.remove(2.5);
    cout << "Elements of the list" << endl;
    llObj.print_elements();

    return 0;
}