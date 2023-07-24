#include <bits/stdc++.h> 
using namespace std;

template<typename T>
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

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL) return false;

    if(root->data == x) return true;
    bool left = false;
    bool right = false;

    if(root->data > x) {
        left = searchInBST(root->left, x);
    }
    if(root->data < x) {
        right = searchInBST(root->right, x);
    }

    return left || right;
}