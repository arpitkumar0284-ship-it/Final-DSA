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

ListNode* oddEvenList(ListNode* head) {
    ListNode* odd = new ListNode(10);
    ListNode* even = new ListNode(20);

    ListNode* tempo = odd;
    ListNode* tempe = even;
    ListNode* temp = head;

    while (temp != NULL) {
        tempo->next = temp;
        tempo = tempo->next;
        temp = temp->next;

        if (temp != NULL) {
            tempe->next = temp;
            tempe = tempe->next;
            temp = temp->next;
        }
    }

    tempo->next = even->next;
    tempe->next = NULL;

    return odd->next;
}

int main() {
    int n;
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    head = oddEvenList(head);

    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
