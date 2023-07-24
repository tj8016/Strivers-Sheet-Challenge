#include <bits/stdc++.h> 

template<typename T>
class BinaryTreeNode 
{
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


bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
     if(root==NULL) return true;
    if(!root->left && !root->right) return true;
    if(!root->left) return (root->right->data>= root->data && validateBST(root->right));
    if(!root->right) return (root->left->data<=root->data && validateBST(root->left));
    if(root->left->data>=root->data || root->right->data<= root->data) return false;
    return validateBST(root->left)&& validateBST(root->right);
}