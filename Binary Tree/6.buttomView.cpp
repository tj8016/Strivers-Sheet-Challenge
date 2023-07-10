#include <bits/stdc++.h> 
using namespace std;

 
// Following is the Binary Tree node structure.
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


vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    map<int, int> mp;
    queue<pair<BinaryTreeNode<int>*, int>> q; 
    q.push({root, 0});

    while(!q.empty()) {
        auto p = q.front();
        q.pop();

        BinaryTreeNode<int> * temp = p.first;
        int line = p.second;

        mp[line] = temp->data;

        if(temp->left) {
            q.push({temp->left, line-1});
        }
        if(temp->right) {
            q.push({temp->right, line+1});
        }
    }

    vector<int> ans;
    for(auto it: mp) {
        ans.push_back(it.second);
    }
    return ans;
}
