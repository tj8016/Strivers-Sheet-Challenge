#include <bits/stdc++.h> 
using namespace std;

template<typename T> 
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
    
    BinaryTreeNode() {
        if (left) {
            delete left;
        }
        if (right) {
            delete right;
        }
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

int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    vector<int> v;
    inorder(root, v);
    int ans = -1;
    for(int i = v.size()-1; i >= 0; i--) {
        if(v[i] >= x) {
            ans = v[i];
        }
        else {
            break;
        }
    }

    return ans;
}