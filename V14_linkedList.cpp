#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to traverse and print the linked list
void linkedListTraversal(Node* ptr) {
    while (ptr != nullptr) {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main() {
    // Declare pointers for the nodes
    Node* head ;
    Node* second ;
    Node* third ;
    Node* fourth ;

    // Allocate memory for nodes in the linked list
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Assign data and link the nodes
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

    // Free the allocated memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
