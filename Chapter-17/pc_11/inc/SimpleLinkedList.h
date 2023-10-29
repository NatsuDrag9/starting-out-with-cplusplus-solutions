#ifndef SIMPLE_LINKED_LIST_H
#define SIMPLE_LINKED_LIST_H

#include <stddef.h>

class SimpleLinkedList
{
protected:
    struct ListNode
    {
        double value;
        ListNode *next;

        ListNode(double value1, ListNode *next1 = NULL)
        {
            value = value1;
            next = next1;
        }
    };
    ListNode *head; // pointer to head of the linked list

public:
    SimpleLinkedList();  // Default constructor
    ~SimpleLinkedList(); // Destructor
    void add(double x);
    bool is_member(double x);
    void print_elements();
    void remove(double x);
    void reverse();
    int search(double x);
    void insert(double x, int pos);
    void sort();

private:
    bool is_member(double value, ListNode *node);
};

class CopyLinkedList : public SimpleLinkedList
{
public:
    CopyLinkedList();                               // Default constructor
    CopyLinkedList(const CopyLinkedList &original); // Copy constructor
    static void destroy_list(ListNode* node);
private:
    static ListNode *copy_list(ListNode *list);
};

#endif /* SIMPLE_LINKED_LIST_H */