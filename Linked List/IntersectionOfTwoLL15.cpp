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

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* tempA = headA;
    ListNode* tempB = headB;

    int lenA = 0;
    while(tempA != NULL) {
        lenA++;
        tempA = tempA->next;
    }

    int lenB = 0;
    while(tempB != NULL) {
        lenB++;
        tempB = tempB->next;
    }

    tempA = headA;
    tempB = headB;

    if(lenA > lenB) {
        int diff = lenA - lenB;
        for(int i = 1; i <= diff; i++) {
            tempA = tempA->next;
        }
    }
    else {
        int diff = lenB - lenA;
        for(int i = 1; i <= diff; i++) {
            tempB = tempB->next;
        }
    }

    while(tempA != tempB) {
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return tempA;
}

int main() {
    ListNode* common = new ListNode(40);
    common->next = new ListNode(50);
    common->next->next = new ListNode(60);

    ListNode* headA = new ListNode(10);
    headA->next = new ListNode(20);
    headA->next->next = new ListNode(30);
    headA->next->next->next = common;

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(15);
    headB->next->next = common;

    ListNode* ans = getIntersectionNode(headA, headB);

    if(ans != NULL)
        cout << "Intersection Node: " << ans->val << endl;
    else
        cout << "No Intersection" << endl;

    return 0;
}