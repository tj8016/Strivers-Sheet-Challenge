#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class TreeNode {
    public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;
    
    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
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

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return solve(arr, 0, n-1, n);
}