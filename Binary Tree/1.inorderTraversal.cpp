#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};


void inorder(Node *root, vector<int>& ans) {
    if(root == NULL) return;

    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

vector<int> getInOrderTraversal(Node *root)
{
    // Write your code here.
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

int main() {
    
    return 0;
}