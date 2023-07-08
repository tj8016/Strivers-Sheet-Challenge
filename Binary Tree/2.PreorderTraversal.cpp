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


void preOrder(Node *root, vector<int>& ans) {
    if(root == NULL) return;

    ans.push_back(root->data);
    preOrder(root->left, ans);
    preOrder(root->right, ans);
}

vector<int> getPreOrderTraversal(Node *root)
{
    // Write your code here.
    vector<int> ans;
    preOrder(root, ans);
    return ans;
}

int main() {
    
    return 0;
}