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

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;

    ListNode* a = head;
    ListNode* b = head->next;

    while(b != NULL) {
        while(b != NULL && a->val == b->val) {
            b = b->next;
        }

        a->next = b;
        a = b;

        if(b != NULL)
            b = b->next;
    }

    return head;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(4);

    head = deleteDuplicates(head);

    ListNode* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}