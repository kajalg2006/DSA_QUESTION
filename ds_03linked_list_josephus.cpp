#include <iostream>
using namespace std;
typedef struct circular_linked_list
{
    int data;
    struct circular_linked_list *next;
} node;
node *temp, *first, *p, *q, *ttemp;

void createfirst(int val)
{
    first = new node;
    first->data = val;
    first->next = first;
}

void Addnodes(int n)
{
    temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }
    ttemp = new node();
    ttemp->data = n;
    ttemp->next = first;
    temp->next = ttemp;
}
int josephus(int n, int k)
{
    temp = first;
    while (temp->next != temp)
    {
        for (int i = 1; i < k - 1; i++)
        {
            temp = temp->next;
        }
        node *todelete = temp->next;
        temp->next = todelete->next;
        if (todelete == first)
        {
            first = todelete->next;
            // cout << first->data<<endl;
        }
        cout << "Eliminating: " << todelete->data << endl;
        delete todelete;
        temp = temp->next;
    }
    return temp->data;
}

void display()
{
    temp = first;
    do
    {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    } while (temp != first);
}
int main()
{
    int i;
    createfirst(10);
    Addnodes(20);
    Addnodes(30);
    Addnodes(40);
    Addnodes(50);
    Addnodes(60);
    display();

    int n = 6; // Number of people in the circle
    int k = 2; // Every k-th person is eliminated
    int survivor = josephus(n, k);
    cout << "The safe position is: " << survivor << endl;
}