#include <stdint.h>

class Node {
    int val = 0;
    Node* xnode;
};

Node* Xor(Node* x, Node* y){
    return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(x) ^ reinterpret_cast<uintptr_t>(y));
}



