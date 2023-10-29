#include <iostream>
#include "../inc/SimpleLinkedList.h"
using namespace std;

/**
 * @brief Default constructor that initializes the head of the linked list
 * 
 */
SimpleLinkedList::SimpleLinkedList()
{
    head = NULL;
}

/**
 * @brief Adds an element to the linked list
 * 
 * @param x - value to be added
 */
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

/**
 * @brief Checks whether the received parameter is a member of the linked list and, returns true if the member exists
 * 
 * @param x - value to check in the list
 * @return true
 * @return false 
 */
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