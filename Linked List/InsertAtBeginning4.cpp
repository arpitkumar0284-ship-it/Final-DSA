#include <iostream>
using namespace std;

struct Node
{
    char info;
    Node* next;
};

// Head pointer
Node* Start = NULL;

// Create a new node
Node* GetNode(char x)
{
    Node* p = new Node;

    p->info = x;
    p->next = NULL;

    return p;
}

// Insert at beginning
void InsBeg(char x)
{
    Node* p = GetNode(x);
    p->next = Start;
    Start = p;
}

// Display linked list
void Traverse()
{
    Node* temp = Start;

    while(temp != NULL)
    {
        cout << temp->info << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    InsBeg('A');
    InsBeg('B');
    InsBeg('C');
    InsBeg('D');
    InsBeg('E');

    Traverse();

    return 0;
}