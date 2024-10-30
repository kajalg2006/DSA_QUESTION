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

// CASE 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    Node *ptr;
    ptr = new Node();
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

// CASE 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    Node *ptr;
    ptr = new Node();
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// CASE 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    Node *ptr;
    ptr = new Node();
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// CASE 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    Node *ptr;
    ptr = new Node();
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    // Traverse and print the linked list
    linkedListTraversal(head);
    cout << "inserting at first" << endl;
    // case 1
    head = insertAtFirst(head, 56);
    linkedListTraversal(head);

    cout << "inserting inbetween" << endl;
    // case 2
    head = insertAtIndex(head, 6, 1);
    linkedListTraversal(head);

    cout << "inserting at end" << endl;
    head = insertAtEnd(head, 46);
    linkedListTraversal(head);

    cout << "inserting after Node" << endl;
    head = insertAfterNode(head, third, 45);
    linkedListTraversal(head);

    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}