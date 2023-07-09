#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ans;
    if(root == NULL) return ans;
    queue<TreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    ans.push_back(root->data);
    while(!q.empty()) {
        TreeNode<int> *temp = q.front();
        q.pop();

        if(temp == NULL) {
            if(!q.empty()) {
                ans.push_back(q.front()->data);
                q.push(NULL);
            }
        }
        else {
            if(temp->left != NULL)q.push(temp->left);
            if(temp->right != NULL)q.push(temp->right);
        }
    }

    return ans;
}