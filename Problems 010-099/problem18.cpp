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

// This question is asked by Amazon. Given a non-empty linked list, return the 
// middle node of the list. If the linked list contains an even number of elements, 
// return the node closer to the end.

Node* middle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);


    Node* midNode = middle(head);
    cout << midNode->data << endl;
}