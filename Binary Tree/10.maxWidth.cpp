#include<bits/stdc++.h>
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

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL) return 0;
    int maxi = INT_MIN;
    int count = 0;
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        maxi = max(maxi, size);

        while(size--) {
            TreeNode<int> * temp = q.front();
            q.pop();

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }

    return maxi;
}

int main() {
    
    return 0;
}