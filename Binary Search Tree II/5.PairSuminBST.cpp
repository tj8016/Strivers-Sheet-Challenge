#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class BinaryTreeNode {
    public: 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

void inorder(BinaryTreeNode<int> *root, vector<int> &v)
{

    if (root == NULL)
        return;

    inorder(root->left, v);

    v.push_back(root->data);

    inorder(root->right, v);
}


bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> v;
    inorder(root, v);

    // Two sum approach
    int i = 0;
    int j = v.size()-1;

    while(i < j) {
        int sum = v[i] + v[j];
        if(sum == k) return true;
        else if(sum > k) j--;
        else i++;
    }
    return false;
}