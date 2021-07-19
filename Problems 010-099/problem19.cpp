/*
 * This question is asked by Microsoft. Given a linked list, containing 
 * unique numbers, return whether or not it has a cycle.
 * Note: a cycle is a circular arrangement (i.e. one node points back to a previous node)
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


bool hasCycle(Node* head) {
    if(head == NULL)
        return false;
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {    //has cycle; according to floyd's tortoise & hare
            return true;
        }
    }
    return false;
}

int main() {
    //driver code
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head;

    cout << hasCycle(head) << endl;
}