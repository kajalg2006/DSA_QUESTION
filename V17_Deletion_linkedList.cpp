#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *deletionAtfirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    delete (ptr);
    return head;
}

struct Node *deletionAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete (q);

    return head;
}

// Deleting the element from linked list from last element
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete (q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node *deleteAtIndex(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = nullptr; // Terminate the list
    // Linked list before deletion
    linkedListTraversal(head);

    // linked list after deletion of first element
    cout << " linked list after deletion of first element" << endl;
    head = deletionAtfirst(head);
    linkedListTraversal(head);

    //  Deleting the element at the given index from linked list
    cout << "After the deletion of  the element at the given index" << endl;
    head = deletionAtIndex(head, 2);
    linkedListTraversal(head);

    // Deleting the element from linked list from last element
    // deleteAtEnd(head);
    // cout << "After the deletion of  the element at the given index" << endl;
    // linkedListTraversal(head);

    cout << "Linked list after deletion of given value" << endl;
    head = deleteAtIndex(head, 66);
    linkedListTraversal(head);

    return 0;
}
