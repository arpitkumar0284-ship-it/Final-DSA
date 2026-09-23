#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode* rotateRight(ListNode* head, int k)
{
    if(head == NULL || head->next == NULL)
        return head;

    ListNode* temp = head;
    int n = 0;

    while(temp != NULL)
    {
        n++;
        temp = temp->next;
    }

    temp = head;

    ListNode* tail = head;

    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    k = k % n;

    if(k == 0)
        return head;

    for(int i = 1; i <= n-k-1; i++)
    {
        temp = temp->next;
    }

    tail->next = head;
    head = temp->next;
    temp->next = NULL;

    return head;
}

void printList(ListNode* head)
{
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    head = rotateRight(head, k);

    cout << "Rotated linked list: ";
    printList(head);

    return 0;
}