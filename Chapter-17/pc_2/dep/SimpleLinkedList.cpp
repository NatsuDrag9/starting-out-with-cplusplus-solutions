#include <iostream>
#include "../inc/SimpleLinkedList.h"
using namespace std;

/*
SimpleLinkedList
*/
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

/*
CopyLinkedList
*/

/**
 * @brief Defualt constructor to initialize heads
 * 
 */
CopyLinkedList::CopyLinkedList(){
    head = NULL;
}
/**
 * @brief Copy constructor that creates a copy of the original list
 * 
 * @param original - original linked list
 */
CopyLinkedList::CopyLinkedList(const CopyLinkedList& original){
    head = copy_list(original.head);
}

/**
 * @brief Static function that creates copy of the list
 * 
 * @param list - list to be copied
 * @return ListNode* - pointer to head of the copied list
 */
SimpleLinkedList::ListNode* CopyLinkedList::copy_list(ListNode* list){
    if(list == NULL){
        // Received list is empty
        return NULL;
    }
    else{
        ListNode* currentNode = new ListNode(list->value, list->next);
        ListNode* nextNode = currentNode->next;
        while(nextNode != NULL){
            nextNode = new ListNode(nextNode->value, nextNode->next);
            nextNode = nextNode->next;
        }
        return currentNode;
    }
}