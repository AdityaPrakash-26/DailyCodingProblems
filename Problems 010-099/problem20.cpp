/*
 * This question is asked by Apple. Given a potentially cyclical linked list where each value 
 * is unique, return the node at which the cycle starts. If the list does not contain a cycle, 
 * return null.
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int d) {  
        data = d;
        next = NULL;
    }
};

Node *detectCycle(Node *head) {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

int main() {
    //driver code
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head->next;

    cout<<detectCycle(head)->data<<endl;
}