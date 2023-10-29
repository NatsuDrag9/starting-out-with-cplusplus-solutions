#include <iostream>
// #include <string>
#include "./inc/SimpleLinkedList.h"
using namespace std;

int main(void)
{
    SimpleLinkedList llObj;
    
    cout << "Adding 2.5 to the list." << endl;
    llObj.add(2.5);
    cout << "Adding 1.5 to the list." << endl;
    llObj.add(1.5);
    cout << "Adding 1225 to the list." << endl;
    llObj.add(1225);

    cout << "\nIs 2.5 a member? ";
    llObj.is_member(2.5) == 1 ? cout << "true" << endl : cout << "false" << endl;
    cout << "Is 1.5 a member? ";
    llObj.is_member(1.5) == 1 ? cout << "true" << endl : cout << "false" << endl;
    cout << "Is 1225 a member? ";
    llObj.is_member(1225) == 1 ? cout << "true" << endl : cout << "false" << endl;

    return 0;
}