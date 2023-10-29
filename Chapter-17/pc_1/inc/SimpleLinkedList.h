#ifndef SIMPLE_LINKED_LIST_H
#define SIMPLE_LINKED_LIST_H

#include <stddef.h>

class SimpleLinkedList{
    protected:
        struct ListNode{
            double value;
            ListNode* next;

            ListNode(double value1, ListNode* next1 = NULL){
                value = value1;
                next = next1;
            }
        };
        ListNode* head;     // pointer to head of the linked list
    
    public:
        SimpleLinkedList();
        void add(double x);
        bool is_member(double x);
};

#endif /* SIMPLE_LINKED_LIST_H */