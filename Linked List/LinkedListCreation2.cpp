#include <iostream>
using namespace std;

// Step 1: Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 2: Pehla node banao
    Node* first = new Node();
    first->data = 10;
    first->next = NULL;

    // Step 3: Dusra node banao
    Node* second = new Node();
    second->data = 20;
    second->next = NULL;

    // Step 4: Teesra node banao
    Node* third = new Node();
    third->data = 30;
    third->next = NULL;

    // Step 5: Link the nodes
    first->next = second;
    second->next = third;

    // Step 6: Head pointer (list ka starting point)
    Node* head = first;

    // Step 7: Print the linked list
    cout << "Linked List elements are: ";
    Node* temp = head;   // temporary pointer for traversal
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
