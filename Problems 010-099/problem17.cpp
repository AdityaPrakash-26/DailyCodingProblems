#include <iostream>
using namespace std;

//implementation for linked list
class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(NULL) {}
};

// the idea is to recursively check whether the head node is the
// value to be removed or not. If yes, we make the head point to
// the next node and delete the current node.
// If not, we recursively call the function on the next node.
Node* removeAllInstancesOfAValue(Node* head, int value){
    if(head == NULL) return head;
    if(head->data == value) {
        head = head->next;
        return removeAllInstancesOfAValue(head, value);
    }
    head->next = removeAllInstancesOfAValue(head->next, value);
    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Before removing: " << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    head = removeAllInstancesOfAValue(head, 20);
    cout << "After removing: " << endl;
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}