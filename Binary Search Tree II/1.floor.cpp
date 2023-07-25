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

void inorder(TreeNode<int> *root, vector<int> &v)
{

    if (root == NULL)
        return;

    inorder(root->left, v);

    v.push_back(root->val);

    inorder(root->right, v);
}

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    vector<int> v;
    inorder(root, v);
    int ans = -1;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] <= X) {
            ans = v[i];
        }
        else {
            break;
        }
    }

    return ans;
}