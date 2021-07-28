#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* findValue(TreeNode* root, int value){
    while(root != nullptr){
        if(value > root->data){
            root=root->right;
        } else if (value < root->data){
            root = root->left;
        } else {
            return root;
        }
    }
    return nullptr;
}

int main() {
    TreeNode * root = new TreeNode(3);
    TreeNode * lChild = new TreeNode(1);
    TreeNode * rChild = new TreeNode(4);

    root->left = lChild;
    root->right = rChild;

    TreeNode* ans = findValue(root, 1);
    cout<<ans->data<<endl;
}