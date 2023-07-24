#include <bits/stdc++.h> 
using namespace std;

template <typename T>

class TreeNode{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~TreeNode() {
        if (left){
            delete left;
        }
        if (right){
            delete right;
        }
    }
};

TreeNode<int>* solve(vector<int> &arr, int l, int r, int n) {
    if(l>r) return NULL;

    int mid = l + (r-l)/2;

    TreeNode<int>* root= new TreeNode<int>(arr[mid]);

    root->left = solve(arr, l, mid-1, n);
    root->right = solve(arr, mid+1, r, n);

    return root;
}

TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    sort(preOrder.begin(), preOrder.end());
    return solve(preOrder, 0, preOrder.size()-1, preOrder.size());
}