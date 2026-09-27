#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* Next = head;
    ListNode* curr = head;

    while(curr) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }

    return prev;
}

int main() {
    int n;
    cout << "Enter the size of linked list: ";
    cin >> n;

    ListNode* head = NULL;
    ListNode* temp = NULL;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    head = reverseList(head);

    cout << "Reversed linked list: ";

    temp = head;

    while(temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}