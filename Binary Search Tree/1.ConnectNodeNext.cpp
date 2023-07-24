#include<bits/stdc++.h>
using namespace std;


template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode<T> *next;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};


void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    // level order traversal 
    queue<BinaryTreeNode< int > *> q;
    q.push(root);

    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            BinaryTreeNode< int > * front = q.front();
            q.pop();

            if(i == size-1) front->next = NULL;
            else {
                BinaryTreeNode< int > * temp = q.front();
                front->next = temp;
            }

            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
        
}

int main() {
    
    return 0;
}