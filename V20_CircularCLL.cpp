#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void linkedlistTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << "elemneet :" << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    Node *ptr;
    ptr = new Node();

    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    // At this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    fourth->next = head;

    linkedlistTraversal(head);

    cout << "linked list afterinsertion" << endl;
    head = insertAtFirst(head,80);
    return 0;
}