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

    // Copying the linked list llObj
    CopyLinkedList cpObj(llObj);

    cout << "\nCopied linked list members:" << endl;
    cout << "Is 2.5 a member? ";
    cpObj.is_member(2.5) == 1 ? cout << "true" << endl : cout << "false" << endl;
    cout << "Is 1.5 a member? ";
    cpObj.is_member(1.5) == 1 ? cout << "true" << endl : cout << "false" << endl;
    cout << "Is 1225 a member? ";
    cpObj.is_member(1225) == 1 ? cout << "true" << endl : cout << "false" << endl;

    return 0;
}