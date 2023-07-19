#include<bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode {
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 
    if(root1 == NULL && root2 == NULL) return true;
    if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {
        return false;
    }

    bool left = identicalTrees(root1->left, root2->left);
    bool right = identicalTrees(root1->right, root2->right);

    if(root1->data != root2->data) return false;
    if(!left || !right) return false;

    return true;
}

int main() {
    
    return 0;
}