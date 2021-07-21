/*
 * This question is asked by Facebook. Given a linked list, 
 * containing unique values, reverse it, and return the result.
*/

#include <iostream>
using namespace std;

//implementation for node of a linked list
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

Node* reverseLinkedList(Node* head){

    Node* p1 = NULL;
    Node* p2 = head;
    Node* p3 = NULL;

    while(p2 != NULL){
        p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    return p1;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* reversed = reverseLinkedList(head);

    while(reversed != NULL){
        cout << reversed->data << " ";
        reversed = reversed->next;
    }
    return 0;
}