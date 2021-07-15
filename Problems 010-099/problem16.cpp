/*
 * This question is asked by Facebook. Given a linked list and a value n, 
 * remove the nth to last node and return the resulting list.
 */
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

Node* removeNthNodeFromEnd(Node* head, int n){
    Node* node1 = head;
    Node* node2 = head;

    for(int i = 0; i<n; i++){
        node2 = node2->next;
    }

    if (!node2) {
            return head->next;
        }

    while(node2->next){
        node1 = node1->next;
        node2 = node2->next;
    }

    //after this node1 is at n-1, so we will replace the
    //next of node1 by the its following value/node

    node1->next = node1->next->next;

    return head;
}

//driver code
int main() {
    Node * node1 = new Node(1);
    Node * node2 = new Node(2);
    Node * node3 = new Node(3);

    node1->next = node2;
    node2->next = node3;

    Node* temp = removeNthNodeFromEnd(node1, 2);
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}