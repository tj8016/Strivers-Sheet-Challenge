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


TreeNode<int>* lca(TreeNode<int>* root,int p,int q){
    if(root==NULL || root->data==p || root->data==q){
        return root;
    }
    TreeNode<int>* lefti=lca(root->left,p,q);
    TreeNode<int>* righti=lca(root->right,p,q);
    if(lefti&&righti)return root;
    if(!lefti) return righti;
    else return lefti;
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    TreeNode<int>* ans=lca(root,x,y);
    return ans->data;
}