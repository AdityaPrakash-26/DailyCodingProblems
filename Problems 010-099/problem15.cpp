/* This question is asked by Apple. Given two sorted linked lists, merge them together 
 * in ascending order and return a reference to the merged list
*/

#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode n(INT_MIN);
    ListNode *p = &n;
    while(l1 && l2){
        if (l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
        } else {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }

    p->next = l1 ? l1 : l2;
    return n.next;
}