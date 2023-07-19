#include <bits/stdc++.h> 
using namespace std;

template <typename T>
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

int isBalance(BinaryTreeNode<int>* root, bool& ans) {
    if(root == NULL) return 0;

    int leftHeight = isBalance(root->left, ans);
    int rightHeight = isBalance(root->right, ans);

    if(leftHeight > rightHeight && ((leftHeight - rightHeight) > 1)) {
        ans = false;
    }
    if (rightHeight > leftHeight && ((rightHeight - leftHeight) > 1)) {
        ans = false;
    }
    
    return max(leftHeight, rightHeight) + 1;
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    bool ans = true;
    int h = isBalance(root, ans);
    return ans;
}