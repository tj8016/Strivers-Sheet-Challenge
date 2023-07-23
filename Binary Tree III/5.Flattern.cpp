#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
    public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->val = data;
        left = NULL;
        right = NULL;
    }
};


TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int>* curr = root;
    while (curr != NULL) {
        if (curr->left) {
            TreeNode<int>* pred = curr->left;
            while (pred->right)
                pred = pred->right;
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
    return root;
}