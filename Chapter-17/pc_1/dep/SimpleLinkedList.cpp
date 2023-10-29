#include <iostream>
#include "../inc/SimpleLinkedList.h"
using namespace std;

SimpleLinkedList::SimpleLinkedList()
{
    head = NULL;
}

void SimpleLinkedList::add(double x)
{
    if (head == NULL)
    {
        // If list is empty
        head = new ListNode(x);
    }
    else
    {
        // If list is not empty
        ListNode *nodePtr = head;
        while (nodePtr->next != NULL)
        {
            nodePtr = nodePtr->next;
        }
        // Create a new node if nodePtr->next is NULL
        // and put it after the last node
        nodePtr->next = new ListNode(x);
    }
}

bool SimpleLinkedList::is_member(double x)
{

    ListNode *nodePtr = head;
    while (nodePtr->next != NULL)
    {
        if (nodePtr->value == x)
        {
            return true;
        }
        nodePtr = nodePtr->next;
    }
    // Check last node's value
    return nodePtr->value == x ? true : false;
}