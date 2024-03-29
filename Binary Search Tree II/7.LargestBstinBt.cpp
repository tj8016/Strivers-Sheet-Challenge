#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode {
    public :
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode() {
        if(left)
            delete left;
        if(right)
            delete right;
    }
};

class node {
public:
    int size;
    int maxi;
    int mini;
    node(int s, int mx, int mn) {
        size=s;
        maxi=mx;
        mini=mn;
    } 
};

node help(TreeNode<int>* root) {
    if (root == nullptr) {
        node n(0, INT_MIN, INT_MAX);
        return n;
    }

    node l = help(root->left);
    node r = help(root->right);

    if (l.maxi < root->data && r.mini > root->data) {
        // It is a valid BST
        int s = l.size + r.size + 1;
        int mx = max(root->data,r.maxi);
        int mn = min(root->data,l.mini);
        node n(s, mx, mn);
        return n;
    }

    // Not a valid BST, return the larger subtree
    return node(max(r.size, l.size), INT_MAX, INT_MIN);
}

int largestBST(TreeNode<int>* root) {
    node i = help(root);
    return i.size;
}
