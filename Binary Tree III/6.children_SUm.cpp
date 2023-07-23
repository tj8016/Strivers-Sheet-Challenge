#include<bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->val = data;
        left = NULL;
        right = NULL;
    }
};

int dfs(BinaryTreeNode<int>* node){
    if(node){
        int sum = 0;
        sum += dfs(node->left);
        sum += dfs(node->right);
        if (!sum) {
            sum = 1e6;
        }
        node->val = sum;
        return sum;
    }else{
        return 0;
    }
}
void changeTree(BinaryTreeNode<int>* root) {
    dfs(root);
}  